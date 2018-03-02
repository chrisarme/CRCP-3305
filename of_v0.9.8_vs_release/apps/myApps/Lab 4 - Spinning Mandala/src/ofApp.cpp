#include "ofApp.h"

void ofApp::drawStar(double midX, double midY)
{
	ofBeginShape();
	for (int i = 0; i < 2; i++)
	{
		ofVertex(199 * cos(75 + (45 * i)), (199 * sin(75 + (45 * i))));
		ofVertex((20 * cos(90 + (45 * i))), (20 * sin(90 + (45 * i))));
		ofVertex((199 * cos(105 + (45 * i))), (199 * sin(105 + (45 * i))));
	}
	ofEndShape();
};

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetBackgroundColor(255);
	
	myFont.load("Early GameBoy.ttf", 20);

	// ofTrueTypeFont & drawString(signiture)
	// PUT FONTS / IMAGES INTO C:\Users\chris\Documents\GitHub\CRCP-3305\of_v0.9.8_vs_release\apps\myApps\Lab 4 - Spinning Mandala\bin\data
	// IN ofApp.h: ADD ofTrueTypeFont myfont;
	// AFTER, PUT INTO SETUP IN HERE myFont.load(fontName, size);
	// ex: myFont.drawString("Hello World!", xpos, ypos);
}

//--------------------------------------------------------------
void ofApp::update()
{

	shapeRotate += .1;
	squarePosition += .1;

	if (abs(squarePosition) >= 350)
	{
		squarePosition = 0;
	}

	colorNumber += .001;

	if (colorNumber >= 24)
	{
		colorNumber = 1;
	}

	rainbowColor[0] = 128 + ((sin((colorNumber*.8 + 0)*1.3) * 128));
	rainbowColor[1] = 128 + ((sin((colorNumber*.8 + 1)*1.3) * 128));
	rainbowColor[2] = 128 + ((sin((colorNumber*.8 + 2)*1.3) * 128));
}

//--------------------------------------------------------------
void ofApp::draw()
{

	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	// 18 hollow square ring
	ofSetColor(0);
	ofSetLineWidth(3);
	ofNoFill();

	for (int i = 0; i < 18; i++)
	{
		ofPushMatrix();
			ofRotate((20 * i) + shapeRotate);
			ofDrawRectangle(100 - squarePosition, 100 - squarePosition, 150, 150);
		ofPopMatrix();
	}

	// 6 inside circles
	ofSetColor(0);
	ofSetLineWidth(1);
	ofFill();

	for (int i = 0; i < 6; i++)
	{
		ofPushMatrix();
			ofRotate((60 * i) - (shapeRotate * 2));
			ofDrawCircle(50, 50, 25);
		ofPopMatrix();
	}

	// large shape
	ofSetColor(rainbowColor[0], rainbowColor[1], rainbowColor[2]);
	ofSetLineWidth(6);
	ofNoFill();

	ofPushMatrix();
		ofRotate(shapeRotate * 3);
		ofDrawRectangle(-150, -150, 300, 300);
	ofPopMatrix();

	/*ofPushMatrix();
	drawStar(0, 0);
	ofPopMatrix();*/

	// Signiture
	ofSetColor(0);
	myFont.drawString("Chris Arme", 120, 370);
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
