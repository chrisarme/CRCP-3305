#pragma once

#include "ofApp.h"
#include <string>;
#include <vector>;

using std::string;
using std::vector;

class Snake {
	//You can use vector in C++ to substitute ArrayList in Java.
	vector <int> x;
	vector <int> y;
	Snake() {
		reLocate();
	}
	void reLocate() {
		x.push_back(floor(rand() % w + 1));
		y.push_back(floor(rand() % h + 1));
	}
	void display() {
		ofSetColor(0, 255, 0);
		for (int i = 0; i<x.size(); ++i)
			rect(x.get(i)*bs, y.get(i)*bs, bs, bs);
	}
	void clean() {
		x.clear();
		y.clear();
	}
	/*bool eat(Apple apple) {//whether snake ate apple or nor
		return x.get(0) == apple.x&&y.get(0) == apple.y;
	}
	bool dead() {//determine whether a snake dead or not
		for (int i = 1; i<x.size(); i++)
			if (x.get(i) == x.get(0) && y.get(i) == y.get(0))
				return true;
		if (x.get(0)<0 || y.get(0)<0 || x.get(0) >= w || y.get(0) >= h)
			return true;
		return false;
	}
	void increaseBody() {
		x.add(0, x.get(0) + dx[dir]);
		y.add(0, y.get(0) + dy[dir]);
	}
	void decreaseBody() {
		x.remove(x.size() - 1);
		y.remove(y.size() - 1);
	}
	void move() {
		increaseBody();
		decreaseBody();
	}
	void keyControl() {
		int newdir = -1;
		switch (key) {
		case 's':
			newdir = 0;
			break;
		case 'w':
			newdir = 1;
			break;
		case 'd':
			newdir = 2;
			break;
		case 'a':
			newdir = 3;
		}
		if (newdir != -1 && (x.size() <= 1 || !(x.get(1) == x.get(0) + dx[newdir] && y.get(1) == y.get(0) + dy[newdir])))
			dir = newdir;
	}*/
};