//
//  Fireworks.cpp
//  Lab8Fireworks
//
//  Created by Kyle Baker on 10/25/17.
//
//

#include "Fireworks.h"
#include "Particle.h"

Fireworks::Fireworks(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration)
{//traditional way to write constructor
    this->x = x;
    this->y = y;
    this->xVelocity = xVelocity;
    this->yVelocity = yVelocity;
    this->xAcceleration = xAcceleration;
    this->yAcceleration = yAcceleration;
}

Fireworks::~Fireworks()//destructor
{
    //Why not using delete[] particlePtr; ?
    for (int i{}; i != particlePtrs.size(); i++)
    {
        delete particlePtrs[i]; //avoid memory leak
        particlePtrs[i] = nullptr; //avoid dangling pointer
    }
    particlePtrs.clear();//clear memory of the vector
}


void Fireworks::update(){ //causes explosion
	for (int i{}; i != particlePtrs.size(); i++)
	{
		particlePtrs[i]->update();
	}
}

void Fireworks::move() 
{
    y -= 3;
	for (int i = 0; i < 100; i++)
	{
		particlePtrs[i]->setY(y);
	}
}

float Fireworks:: getY()
{
        return y;
}

void Fireworks:: setY(float y)
{
    this->y = y;
}

void Fireworks::setup() 
{
    for (int i = 0; i < 100; i++) 
	{
        particlePtrs.push_back(new Particle(x, 300, ofRandom(-10,10), ofRandom(-10,10), ofRandom(-5, 5), ofRandom(-2, 5)));
    }
    //noise.load("LaunchSound.mp3");
    //noise.play();
}

void Fireworks::displayParticles() 
{
	for (int i{}; i != particlePtrs.size(); i++)
	{
		particlePtrs[i]->draw();
	}
}


void Fireworks::display()
{
    ofSetColor(255, 255, 0);
    ofSetCircleResolution(3);
    ofDrawCircle(x, y, size);
}
