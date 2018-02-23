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

	ofSetColor(246, 214, 95, 175);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(226, 322, 66);

	// Green circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(385, 270, 67);

	ofSetColor(15, 114, 93, 150);
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

	// Larger Red circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(296, 205, 47);

	ofSetColor(227, 27, 48, 150);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(296, 205, 46);

	// Pink circle
	ofSetColor(75);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(224, 178, 57);

	ofSetColor(232, 166, 170, 150);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(224, 178, 56);

	// small orange circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(5);
	ofNoFill();
	ofDrawCircle(266, 268, 31);

	ofSetColor(240, 100, 68, 125);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(266, 268, 29);

	// Small black center of yellow small yellow(?) circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(266, 268, 8);

	// small green/grey circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(224, 238, 32);

	ofSetColor(88, 86, 65, 125);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(224, 238, 31);

	// tiny red circle
	ofSetColor(85);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(292, 343, 9);

	ofSetColor(227, 27, 48, 150);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(292, 343, 8);

	// medium red circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(211, 376, 26);

	ofSetColor(227, 27, 48, 150);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(211, 376, 25);

	// medium yellow circle
	ofSetColor(60);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(364, 357, 45);

	ofSetColor(246, 214, 95, 175);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(364, 357, 44);

	// medium blue circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(4);
	ofNoFill();
	ofDrawCircle(162, 337, 20);

	ofSetColor(76, 144, 131, 150);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(162, 337, 19);

	// small red circle with large border
	// WHY DOES THIS BORDER LOOK SO BAD???????
	ofSetColor(39, 24, 29);
	ofSetLineWidth(7);
	ofNoFill();
	ofDrawCircle(123, 268, 15);

	ofSetColor(227, 27, 48, 150);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(123, 268, 12);

	// tiny blue circle with large border
	ofSetColor(39, 24, 29);
	ofSetLineWidth(3);
	ofNoFill();
	ofDrawCircle(94, 332, 7);

	ofSetColor(40, 62, 111, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(94, 332, 6);

	// small red circle
	ofSetColor(95);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(129, 413, 16);
	
	ofSetColor(227, 27, 48, 125);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(129, 413, 15);

	// small pink circle with large border
	ofSetColor(39, 24, 29);
	ofSetLineWidth(3);
	ofNoFill();
	ofDrawCircle(316, 465, 16);

	ofSetColor(227, 27, 48, 125);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(316, 465, 15);

	// tiny yellow circle
	ofSetColor(125);
	ofSetLineWidth(1);
	ofNoFill();
	ofDrawCircle(342, 422, 6);

	ofSetColor(246, 214, 95, 150);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(342, 422, 6);

	// tiny red circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(1);
	ofNoFill();
	ofDrawCircle(277, 408, 5);

	ofSetColor(227, 27, 48, 125);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(277, 408, 5);

	// tiny black circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(239, 420, 4);

	// tinyish pink circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(446, 411, 11);

	ofSetColor(227, 27, 48, 175);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(446, 411, 10);

	// small black circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(390, 386, 12);
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
