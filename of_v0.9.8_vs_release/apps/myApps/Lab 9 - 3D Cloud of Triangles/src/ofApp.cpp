#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(60);
	ofSetDepthTest(true);
	ofSetVerticalSync(true);

	cam.setDistance(400);

	sphereRadius = 140;

	for (int i = 0; i < 300; i++)
	{
		triangles.push_back(Triangle(ofRandom(.5, 2), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)), ofRandom(360), sphereRadius));
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	
}

//--------------------------------------------------------------
void ofApp::draw()
{
	cam.begin();

	ofFill();

	for (int i = 0; i < triangles.size(); i++)
	{
		triangles[i].draw();
	}

	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	if (key == VK_DOWN || key == 's')
	{
		cam.setDistance(cam.getDistance() - 10);
	}
	else if (key == VK_UP || key == 'w')
	{
		cam.setDistance(cam.getDistance() + 10);
	}

	if (key == 'a' && triangles.size() <= 1000)
	{
		triangles.push_back(Triangle(ofRandom(.5, 2), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)), ofRandom(360), sphereRadius));
	}
	else if (key == 'd' && triangles.size() > 0)
	{
		int trianglePosition = ofRandom(0, triangles.size() - 1);
		triangles.erase(triangles.begin() + trianglePosition);
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

//???
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY)
{
	if (scrollY < 0)
	{
		cam.setDistance(cam.getDistance() - 10);
	}
	else if (scrollY > 0)
	{
		cam.setDistance(cam.getDistance() + 10);
	}

	//mouseScrolled(x, y, scrollX, scrollY);
}
