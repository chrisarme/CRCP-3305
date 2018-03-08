#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//ofNoFill();
	ofSetFrameRate(60);

	timeRepeated = 0;
	sinNumber = 0;
	number = .05;
	treeSeed = (rand() % 100 + 1);

	greenColor = ofColor(0, 175, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

/*
// practice
void ofApp::drawCircle(int x, int y, int r)
{
	if (r > 2)
	{
		ofDrawCircle(x, y, r);
		// call itself at points a quarter of the way across the circle
		drawCircle(x - (r / 2), y, r / 2);
		drawCircle(x + (r / 2), y, r / 2);
	}
}

int ofApp::fibonacciSequence(int n)
{
	if (n == 0) { return 0; }
	if (n == 1) { return 1; }

	return fibonacciSequence(n - 1) + fibonacciSequence(n - 2);
}*/

void ofApp::drawStick(int x1, int y1, int length, double lineWidth, ofColor baseColor, double mult)
{
	ofPushStyle();

		ofSetLineWidth(lineWidth);
		ofSetColor(baseColor);

		if (length > 10)
		{
			ofPushMatrix();
				ofRotate(15 + (timeRepeated * mult));
				ofDrawLine(0, 0, 0, -length);
				ofTranslate(0, -length);
				drawStick(x1, y1 - length, length - 10, lineWidth - 2, baseColor.lerp(ofColor(255), .04), mult + .3);
			ofPopMatrix();


			ofPushMatrix();
			ofRotate(-15 + (timeRepeated * mult));
				ofDrawLine(0, 0, 0, -length);
				ofTranslate(0, -length);
				drawStick(x1, y1 - length, length - 10, lineWidth - 2, baseColor.lerp(ofColor(255), .04), mult + .3);
			ofPopMatrix();
		}
		else
		{
			ofSetColor(greenColor);
			ofRectMode(OF_RECTMODE_CENTER);
			ofDrawRectangle(0, 0, 10, 10);
		}
	ofPopStyle();
}

void ofApp::drawBackground()
{
	ofSetBackgroundColor(255);
	ofSetColor(0, 200, 200);

	ofPushMatrix();
	ofTranslate(30, ofGetHeight());
	for (int i = 0; i < 25; i++)
	{
		ofDrawRectangle(0, 0, 10, -300 + (sin(sinNumber + (.6 * i)) * 30));
		ofTranslate(40, 0);
	}
	ofPopMatrix();

	ofSetColor(255, 255, 0);
	ofDrawCircle(200, 150, 100);

	sinNumber += .05;
}

//--------------------------------------------------------------
void ofApp::draw(){
	drawBackground();

	ofPushMatrix();
		ofTranslate(ofGetWidth() / 2, ofGetHeight());
		ofSetColor(0);
		drawStick(0, 0, 101, 20, ofColor(83, 53, 10), 1);
	ofPopMatrix();

	if (timeRepeated >= 2)
	{
		number = -.05;
	}
	else if (timeRepeated <= -2)
	{
		number = .05;
	}

	timeRepeated += number;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
