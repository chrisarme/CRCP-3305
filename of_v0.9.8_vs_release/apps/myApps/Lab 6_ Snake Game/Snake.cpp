#pragma once
#include "Snake.h"

Snake::Snake()
{
	reLocate(30, 30);
	dir = 2;
}
Snake::Snake(int width, int height)
{
	reLocate(width, height);
	dir = 2;
}

void Snake::reLocate(int width, int height) 
{
	x.push_back(floor(rand() % width + 1));
	y.push_back(floor(rand() % height + 1));
}

void Snake::display(int bs)
{
	ofSetColor(0, 255, 0);
	for (int i = 0; i < x.size(); ++i)
	{
		ofDrawRectangle(x[i]*bs, y[i]*bs, bs, bs);
	}
}

void Snake::clean() {
	x.clear();
	y.clear();
}

void Snake::increaseBody() {
	if (x.size() > 0)
	{
		x.insert(x.begin(), x.front() + dx[dir]);
		y.insert(y.begin(), y.front() + dy[dir]);
	}
	else
	{
		x.push_back(x.front() + dx[dir]);
		y.push_back(y.front() + dy[dir]);
	}
}
void Snake::decreaseBody() {
	x.pop_back();
	y.pop_back();
}
void Snake::move() {
	increaseBody();
	decreaseBody();
}

void Snake::keyControl(int key) {
	int newdir = -1;
	switch (key) {
	case 83:
	case 115: // s
		newdir = 0;
		break;
	case 87:
	case 119: // w
		newdir = 1;
		break;
	case 68:
	case 100: // d
		newdir = 2;
		break;
	case 65:
	case 97: // a
		newdir = 3;
		break;
	}

	if ((x.size() > 1))
	{
		if ((!(x[1] == x.front() + dx[newdir] && y[1] == y.front() + dy[newdir])))
		{
			dir = newdir;
		}
	}
	else if (newdir != -1)
	{
		dir = newdir;
	}
}

bool Snake::eat(Apple apple) {//whether snake ate apple or nor
	return (x[0] == apple.getX() && y[0] == apple.getY());
}

bool Snake::dead(int w, int h) {//determine whether a snake dead or not
	for (int i = 1; i < x.size(); i++)
		if (x[i] == x[0] && y[i] == y[0])
			return true;
	if (x[0] < 0 || y[0] < 0 || x[0] >= w || y[0] >= h)
		return true;
	return false;
}