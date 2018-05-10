#pragma once

#include "ofMain.h"
#include "customCamera.h"
#include "ofEasyCamMod.h"
#include "Player.h"
#include "Enemies.h"

class ofApp : public ofBaseApp
{
private:
	//ofEasyCam TESTCAM;
	ofEasyCamMod cam;
	Player player;
	Enemies enemies;

	ofTrueTypeFont fontSmall;
	ofTrueTypeFont fontMed;
	ofTrueTypeFont fontLarge;

	bool canShoot;
	int screen = 0;
	int score = 0;

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
		
};
