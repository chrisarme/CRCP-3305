#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetDepthTest(true);
	ofDisableArbTex();
	ofSetFrameRate(60);

	cam.setGlobalPosition(2, 0, 60);

	// x, y, z, h, w, d, color
	cube = CubicObject(15, 15, 0, 15, 15, 15, ofColor(255, 0, 0));
	rocket = RocketObject(-15, 15, 0, (15 / 2), 15, ofColor(ofColor(0, 255, 0)));
	spheres = SpheresObject(15, -15, 0, 4, ofColor(0, 0, 255));
	multipleObjects = MultipleObjects(-15, -15, 0, 7.5, 15, ofColor(255));

	objects[0][0] = &cube;
	objects[0][1] = &rocket;
	objects[1][0] = &spheres;
	objects[1][1] = &multipleObjects;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			objects[i][j]->setup();
		}
	}

}

//--------------------------------------------------------------
void ofApp::update()
{

	if (ofGetMouseX() <= (ofGetWidth() / 2) && ofGetMouseY() >= (ofGetHeight() / 2))
	{
		objects[1][1]->rotate();
	}
	else if (ofGetMouseX() >= (ofGetWidth() / 2) && ofGetMouseY() <= (ofGetHeight() / 2))
	{
		objects[0][0]->rotate();
	}
	else if (ofGetMouseX() >= (ofGetWidth() / 2) && ofGetMouseY() >= (ofGetHeight() / 2))
	{
		objects[1][0]->rotate();
	}
	else if (ofGetMouseX() <= (ofGetWidth() / 2) && ofGetMouseY() <= (ofGetHeight() / 2))
	{
		objects[0][1]->rotate();
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			objects[i][j]->update();
		}
	}

	if (sinNumber >= TWO_PI)
	{
		sinNumber = 0;
	}

	sinNumber += PI / 400;
}

//--------------------------------------------------------------
void ofApp::draw(){

	cam.begin();

	ofPushMatrix();
	ofTranslate(-ofGetWidth() / 2, -ofGetHeight() / 2, -600);
	ofBackgroundGradient(ofColor(150 - abs((sin(sinNumber)) * 50)), ofColor(abs(sin(sinNumber)) * 80, 0, 0));
	ofPopMatrix();

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			objects[i][j]->draw();
		}
	}

	cam.end();
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
