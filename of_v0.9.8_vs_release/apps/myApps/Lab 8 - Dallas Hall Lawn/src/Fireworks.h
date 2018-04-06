//
//  Fireworks.hpp
//  Lab8Fireworks
//
//  Created by Kyle Baker on 10/25/17.

#pragma once

#include <stdio.h>
#include "ofMain.h"
#include "Particle.h"
#include <vector>
using std::vector;

class Fireworks{
private:
    ofSoundPlayer noise;
    float x, y, size{ 10 }, alpha{255};
    float xVelocity{}, yVelocity{};
    float xAcceleration, yAcceleration;
    int Amount{1000};
    vector<Particle*> particlePtrs;
public:
    ~Fireworks();
    void update();
    float getY();
    void setY(float y);
    void move();
    void setup();
    void displayParticles();
    
    Fireworks();
    Fireworks(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration);//overloaded constructor

    void display();

};