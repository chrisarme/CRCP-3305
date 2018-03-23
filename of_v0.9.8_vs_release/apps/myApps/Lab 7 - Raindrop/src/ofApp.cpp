#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);

	for (int i = 0; i < 10; i++)
	{
		droop = new Raindrop{ ofRandom(ofGetWidth()), ofRandom(-200, -50) , ofRandom(5, 15) };
		drops.push_back(droop);
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	
	switch (screen)
	{
	case 0:

		// nothing???
		break;

	case 1:
		for (int i = 0; i < drops.size(); i++)
		{
			drops[i]->update();
			if (drops[i]->checkExistence())
			{
				drops.erase(drops.begin() + i);
				droop = new Raindrop{ ofRandom(ofGetWidth()), ofRandom(-200, -50), ofRandom(5, 15) };
				drops.push_back(droop);
			}
		}
		break;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	switch (screen)
	{
	case 0:
		ofSetBackgroundColor(0);
		break;

	case 1:
		ofSetBackgroundColor(255);
		for (int i = 0; i < drops.size(); i++)
		{
			drops[i]->draw();
		}
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 67)
	{
		screen = 1;
	}
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
