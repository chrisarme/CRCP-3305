#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//ofNoFill();
	timeRepeated = 0;
	sinNumber = 0;
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

void ofApp::drawStick(int x1, int y1, int length)
{
	if (length > 10)
	{
		ofPushMatrix();
		ofRotate(15);
			ofDrawLine(0, 0, 0, -length);
			ofTranslate(0, -length);
			timeRepeated += 5;
			drawStick(x1, y1 - length, length - 10);
		ofPopMatrix();

		ofPushMatrix();
		ofRotate(-15);
			ofDrawLine(0, 0, 0, -length);
			ofTranslate(0, -length);
			timeRepeated += 5;
			drawStick(x1, y1 - length, length - 10);
		ofPopMatrix();
	}
}

void ofApp::drawBackground()
{
	ofPushMatrix();
	ofTranslate(30, ofGetHeight());
	for (int i = 0; i < 25; i++)
	{
		ofDrawRectangle(0, 0, 10, -300 + (sin(sinNumber + (.6 * i)) * 30));
		ofTranslate(40, 0);
	}
	ofPopMatrix();

	//ofDrawRectangle(20, ofGetWidth(), 40, ofGetWidth() - 300);

	sinNumber += .05;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(125, 255, 125);
	drawBackground();

	ofPushMatrix();
		ofTranslate(ofGetWidth() / 2, ofGetHeight());
		ofSetColor(0);
		drawStick(0, 0, 101);
	ofPopMatrix();
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
