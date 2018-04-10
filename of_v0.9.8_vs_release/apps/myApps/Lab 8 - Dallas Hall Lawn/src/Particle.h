#pragma once
class Particle
{//prototype of Particle
	//Good naming convention:
	//I. choose either case: (1) CamelCase (2) Pascal/Lisp/COBOL case
	//II. names for variable/objects or functions start from lowercase letter, 
	//while names for Class start from uppercase letter.
private:
	float x, y, size{ 10 }, alpha{255};
	float xVelocity{}, yVelocity{};//CamelCase
	float xAcceleration, yAcceleration;
	//float x_acceleration, y_acceleration;//COBOL case
public:
	//Particle() = default;//temporary put here
	Particle(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration);//overloaded constructor
	void update();
	void draw();
	void setY(int yPos);
	int getAlpha();
};