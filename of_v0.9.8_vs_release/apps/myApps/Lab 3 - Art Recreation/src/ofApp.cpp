#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(231, 214, 196);
	ofEnableSmoothing();
	ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	// This will not work properly in any other window size besides the original one
	// For size 1114 x 1152
	/* 
	ofFill();
	ofSetColor(20, 20, 20);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 30, 460);
	
	ofSetColor(231, 214, 196);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 30, 420);

	// Larger yellow circle
	ofSetColor(75);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(420, 580, 120);

	ofSetColor(246, 214, 95, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(420, 580, 119);

	// Green circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(700, 450, 120);

	ofSetColor(15, 114, 93, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(700, 450, 119);

	// grey/green circle 
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(510, 550, 150);

	ofSetColor(88, 86, 65, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(533, 600, 165);

	// Pink circle
	ofSetColor(75);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(400, 320, 105);

	ofSetColor(232, 166, 170, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(400, 320, 104);

	// Red circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(523, 363, 85);

	ofSetColor(227, 27, 48, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(523, 363, 84);

	*/
	
	// For 575 x 595 size

	// Outer circle
	ofFill();
	ofSetColor(20, 20, 20);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 260);

	ofSetColor(231, 214, 196);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 240);

	// Larger yellow circle
	ofSetColor(75);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(226, 322, 67);

	ofSetColor(246, 214, 95, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(226, 322, 66);

	// Green circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(385, 270, 67);

	ofSetColor(15, 114, 93, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(385, 270, 66);

	// green/grey circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(272, 310, 85);

	ofSetColor(88, 86, 65, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(272, 310, 85);

	// Pink circle
	ofSetColor(75);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(224, 178, 57);

	ofSetColor(232, 166, 170, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(224, 178, 56);

	// Larger Red circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(296, 205, 47);

	ofSetColor(227, 27, 48, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(296, 205, 46);
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
