#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(231, 214, 196);
	ofEnableSmoothing();
	ofEnableAntiAliasing();
	ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	// Beams
	ofFill();
	ofSetColor(211, 172, 117, 200);

	ofSetPolyMode(OF_POLY_WINDING_NONZERO);
	ofBeginShape();
		ofVertex(0, 435);
		ofVertex(0, ofGetHeight());
		ofVertex(44, ofGetHeight());
		ofVertex(ofGetWidth(), 0);
		ofVertex(533, 0);
	ofEndShape();

	ofSetColor(65, 126, 111, 200);

	ofBeginShape();
	ofVertex(192, 0);
	ofVertex(106, 0);
	ofVertex(ofGetWidth(), 568);
	ofVertex(ofGetWidth(), 351);
	ofEndShape();

	// Outer circle
	ofNoFill();
	ofSetColor(20, 19, 25);
	ofSetLineWidth(20);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 260);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 250);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 245);

	/*ofSetColor(231, 214, 196);
	ofDrawCircle(ofGetWidth() / 2, (ofGetHeight() / 2) - 10, 240);*/

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

	// medium black circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(349, 188, 18);

	// small black circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(392, 235, 12);

	// medium purple circle
	ofSetColor(80);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(391, 161, 33);

	ofSetColor(121, 66, 85, 180);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(391, 161, 32);

	// medium blue circle
	ofSetColor(39, 24, 29);
	ofSetLineWidth(2);
	ofNoFill();
	ofDrawCircle(441, 275, 25);

	ofSetColor(12, 91, 108, 180);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(441, 275, 24);

	// tiny red circle with border
	ofSetColor(227, 27, 48, 200);
	ofSetLineWidth(1);
	ofFill();
	ofDrawCircle(267, 81, 5);

	ofSetColor(39, 24, 29);
	ofSetLineWidth(3);
	ofNoFill();
	ofDrawCircle(267, 81, 6);

	// LINES
	ofSetColor(39, 24, 29);

	ofSetLineWidth(.5);
	ofDrawLine(106, 339, 454, 380);
	ofDrawLine(82, 244, 459, 348);
	ofDrawLine(399, 122, 346, 457);
	ofDrawLine(361, 487, 420, 113);
	ofDrawLine(153, 454, 340, 197);
	ofDrawLine(164, 458, 346, 193);

	ofSetLineWidth(1);
	ofDrawLine(105, 312, 266, 162);
	ofDrawLine(175, 117, 474, 355);
	ofDrawLine(85, 234, 462, 335);
	ofDrawLine(112, 314, 393, 458);
	ofDrawLine(293, 128, 316, 156);
	ofDrawLine(301, 119, 321, 148);
	ofDrawLine(140, 437, 252, 417);
	ofDrawLine(168, 409, 246, 453);
	ofDrawLine(332, 446, 384, 415);
	ofDrawLine(336, 455, 386, 422);
	ofDrawLine(340, 462, 392, 430);
	ofDrawLine(83, 264, 107, 223);
	ofDrawLine(89, 261, 117, 224);
	ofDrawLine(140, 277, 151, 241);
	ofDrawLine(409, 121, 354, 470);

	ofSetLineWidth(2);
	ofDrawLine(133, 150, 475, 207);
	ofDrawLine(132, 367, 318, 125);
	ofDrawLine(189, 459, 403, 102);
	ofDrawLine(79, 290, 482, 370);
	ofDrawLine(415, 209, 439, 209);
	ofDrawLine(416, 217, 449, 217);

	ofSetLineWidth(3);
	ofDrawLine(421, 187, 423, 418);
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
