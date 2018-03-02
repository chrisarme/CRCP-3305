#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){

}

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
}

void ofApp::drawStick(int x1, int y1, int x2, int y2, int length)
{
	if (length > 10)
	{
		ofRotate(10);
		ofPushMatrix();
			ofTranslate(x1, y1);
			ofDrawLine(0, 0, 0, -length);
		ofPopMatrix();
		drawStick(x1, y1 - length, 0, 0, length - 20);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofTranslate(ofGetWidth() / 2, ofGetHeight());
	//drawCircle(0, 0, ofGetWidth() / 4);
	drawStick(ofGetWidth() / 2, ofGetHeight(), 0, 0, 100);
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
