#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Fireworks.h"
#include "Raindrop.h"
#include <vector>//ArrayList library class in C++
using std::vector;
class ofApp : public ofBaseApp//super class
{
	int fireworkAmount = 10;
	int raindropAmount = 10;
	int explosionHeight = 200;
	vector<Fireworks*> fireworksPtrs;//create static allocation array (normal array) of pointers
	vector<Raindrop*> raindropsPtrs;
public:
	~ofApp();//destructor
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
};