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
	ofFill();
	ofSetColor(20, 20, 20);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 360);
	
	ofSetColor(231, 214, 196);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 320);

	ofSetColor(88, 86, 65, 100);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2), 150);

	ofSetColor(15, 114, 93, 100);
	ofDrawCircle((ofGetWidth() / 2) + 150, (ofGetHeight() / 2), 150);

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
