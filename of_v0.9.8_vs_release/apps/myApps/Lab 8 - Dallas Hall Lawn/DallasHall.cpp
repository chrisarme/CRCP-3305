#include "ofMain.h"
#include "DallasHall.h"

void DallasHall::draw()
{
	// I'm a programmer, not an artist
	ofSetColor(80, 10, 0);
	ofDrawRectangle(150, ofGetHeight() - 400, ofGetWidth() - 300, 200);
	ofSetCircleResolution(50);
	ofDrawCircle(ofGetWidth() / 2, ofGetHeight() - 375, 150);

	ofSetColor(0, 92, 9);
	ofDrawRectangle(0, ofGetHeight() - 200, ofGetWidth(), 200);

	ofSetColor(255);
	ofDrawRectangle(200, ofGetHeight() - 175, ofGetWidth() - 400, 25);
}