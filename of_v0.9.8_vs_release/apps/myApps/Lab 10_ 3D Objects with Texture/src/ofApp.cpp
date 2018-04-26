#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetDepthTest(true);
	ofDisableArbTex();
	//ofSetSphereResolution(20);

	//cam.setDistance(100);
	cam.setGlobalPosition(0, 0, 100);

	//glEnable(texture1);

	/*for (int i = 0; i < 4; i++)
	{
		primativeObjects[i]
	}*/

	//image1.load("Image 1.jpg");
	//texture1 = image1.getTexture();

	ofLoadImage(texture1, "Image1test.jpg");

	primativeObjects[0] = new ofSpherePrimitive(10, 20);
	primativeObjects[1] = new ofBoxPrimitive(20, 20, 20);
	primativeObjects[2] = new ofCylinderPrimitive(10, 20, 10, 2);
	primativeObjects[3] = new ofConePrimitive(15, 20, 10, 10);

	//delete[] primativeObjects;
	//primativeObjects = nullptr;

	//primativeObjects[0]->mapTexCoordsFromTexture(image1.getTexture());

	//image1.getTexture().bind();

	//primativeObjects[0]->

	
}

//--------------------------------------------------------------
void ofApp::update()
{
	ofVec3f test = cam.worldToScreen(primativeObjects[0]->getPosition() + ofVec3f(10, 20, 10));
	ofVec2f mouse = ofVec2f(ofGetMouseX(), ofGetMouseY());
	if (test.distance(mouse) <= 100)
	{
		primativeObjects[1]->rotate(.25, 0, 1, 0);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	cam.begin();

	ofPushMatrix();
		texture1.bind();
		ofSetColor(255);
		ofTranslate(15, -15, 0);
		primativeObjects[0]->draw();
		texture1.unbind();
	ofPopMatrix();

	ofPushMatrix();
	ofSetColor(255);
	ofTranslate(15, 15, 0);
	primativeObjects[1]->draw();
	ofPopMatrix();

	ofPushMatrix();
	ofSetColor(0, 200, 0);
	ofTranslate(-15, -15, 0);
	primativeObjects[2]->draw();
	ofPopMatrix();

	ofPushMatrix();
	ofSetColor(0, 0, 200);
	ofTranslate(-15, 15, 0);
	primativeObjects[3]->draw();
	ofPopMatrix();


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
