#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetDepthTest(true);
	ofSetVerticalSync(true);

	cam.setDistance(60);

	box.set(5, 5, 5);
	sphere.set(20, 20);

	trianglePrimitive = of3dPrimitive(triangleMesh);

	for (int i = 0; i < 0; i++)
	{
		triangles.push_back(of3dPrimitive(triangleMesh));
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	cam.begin();

	ofFill();
	//ofDrawSphere(0, 0, 0, 20);

	sphere.setPosition(0, 0, 0);

	//ofDrawBox(20 * cos(ofDegToRad(90)) * sin(ofDegToRad(90)), 20 * sin(ofDegToRad(90)) * sin(ofDegToRad(90)), 20 * cos(ofDegToRad(90)), 5, 5, 5);

	//box.setPosition(22 * cos(ofDegToRad(90)) * sin(ofDegToRad(90)), 22 * sin(ofDegToRad(90)) * sin(ofDegToRad(90)), 22 * cos(ofDegToRad(90)));

	trianglePrimitive.setPosition(20 * cos(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * sin(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * cos(ofDegToRad(45)));
	//trianglePrimitive.setOrientation(ofVec3f(ofRadToDeg(45), ofRadToDeg(45), ofRadToDeg(45)));
	trianglePrimitive.setOrientation(ofQuaternion(0, ofVec3f(1, 0, 0), 45, ofVec3f(0, 1, 0), 45, ofVec3f(0, 0, 1)));

	for (int i = 0; i < triangles.size(); i++)
	{
		trianglePrimitive.setPosition(20 * cos(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * sin(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * cos(ofDegToRad(45)));
		trianglePrimitive.setOrientation(ofQuaternion(0, ofVec3f(1, 0, 0), 45, ofVec3f(0, 1, 0), 45, ofVec3f(0, 0, 1)));
	}

	ofSetColor(255, 0, 255);
	sphere.draw();

	//ofSetColor(0);
	//box.draw();

	ofSetColor(0, 180, 0);
	trianglePrimitive.draw();


	/*
	x = r * cos(s) * sin(t)
	y = r * sin(s) * sin(t)
	z = r * cos(t)
	*/

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
