#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(60);
	ofSetDepthTest(true);
	ofSetVerticalSync(true);

	cam.setDistance(60);

	box.set(5, 5, 5);
	sphere.set(20, 20);

	//trianglePrimitive = of3dPrimitive(triangleMesh);

	//tempTriangle = Triangle(ofRandom(0, 360), ofRandom(5, 15), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)));

	/*for (int i = 0; i < 80; i++)
	{
		triangles.push_back(Triangle(ofRandom(0, 360), ofRandom(0, 180), ofRandom(1, 5), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255))));
	}*/

	vertices.resize(300);
	for (int i = 0; i<100; i++) {	//Scan all the triangles
									//Generate the center of the triangle
									//as a random point on the sphere

									//Take the random point from
									//cube [-1,1]x[-1,1]x[-1,1]	
		ofPoint center(ofRandom(-1, 1),
			ofRandom(-1, 1),
			ofRandom(-1, 1));
		center.normalize(); //Normalize vector's length to 1
		center *= 20;	//Now the center vector has
						//length Rad

						//Generate the triangle's vertices
						//as the center plus random point from
						//[-rad, rad]x[-rad, rad]x[-rad, rad]
		for (int j = 0; j<3; j++) {
			vertices[i * 3 + j] =
				center + ofPoint(ofRandom(-20, 20),
					ofRandom(-20, 20),
					ofRandom(-20, 20));
		}
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	sphereRot += .1;
	sphere.setOrientation(ofVec3f(sphereRot, 1, 1));
}

//--------------------------------------------------------------
void ofApp::draw()
{
	cam.begin();

	ofFill();
	//ofDrawSphere(0, 0, 0, 20);

	sphere.setPosition(0, 0, 0);

	//ofDrawBox(20 * cos(ofDegToRad(90)) * sin(ofDegToRad(90)), 20 * sin(ofDegToRad(90)) * sin(ofDegToRad(90)), 20 * cos(ofDegToRad(90)), 5, 5, 5);

	//box.setPosition(22 * cos(ofDegToRad(90)) * sin(ofDegToRad(90)), 22 * sin(ofDegToRad(90)) * sin(ofDegToRad(90)), 22 * cos(ofDegToRad(90)));

	//trianglePrimitive.setPosition(20 * cos(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * sin(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * cos(ofDegToRad(45)));
	//trianglePrimitive.setOrientation(ofVec3f(ofRadToDeg(45), ofRadToDeg(45), ofRadToDeg(45)));
	//trianglePrimitive.setOrientation(ofQuaternion(0, ofVec3f(1, 0, 0), 45, ofVec3f(0, 1, 0), 45, ofVec3f(0, 0, 1)));

	ofSetColor(255, 0, 255);
	sphere.draw();

	for (int i = 0; i < triangles.size(); i++)
	{
		//trianglePrimitive.setPosition(20 * cos(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * sin(ofDegToRad(45)) * sin(ofDegToRad(45)), 20 * cos(ofDegToRad(45)));
		//trianglePrimitive.setOrientation(ofQuaternion(0, ofVec3f(1, 0, 0), 45, ofVec3f(0, 1, 0), 45, ofVec3f(0, 0, 1)));

		triangles[i].draw();
	}

	//ofSetColor(0);
	//box.draw();

	/*ofSetColor(0, 180, 0);
	trianglePrimitive.draw();*/


	/*
	x = r * cos(s) * sin(t)
	y = r * sin(s) * sin(t)
	z = r * cos(t)
	*/

	ofPushMatrix();	//Store the coordinate system

					//Move the coordinate center to screen's center
	//ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);

	//Calculate the rotation angle
	float time = ofGetElapsedTimef();	//Get time in seconds
	float angle = time * 10;			//Compute angle. We rotate at speed 10 degrees per second
	ofRotate(angle, 0, 1, 0);			//Rotate the coordinate system along y-axe

										//Draw the triangles
	for (int i = 0; i< 100; i++) {
		ofSetColor(255, 0, 0);	//Set color
		ofTriangle(vertices[i * 3], vertices[i * 3 + 1], vertices[i * 3 + 2]); //Draw triangle
	}

	ofPopMatrix();	//Restore the coordinate system

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

//???
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY)
{
	mouseScrolled(x, y, scrollX, scrollY);
}
