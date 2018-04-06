#include "ofApp.h"

//--------------------------------------------------------------

ofApp::~ofApp()//destructor
{
	////Why not using delete[] particlePtr; ?
	//for (int i{}; i != Amount; i++)
	//{
	//	delete fireworksPtrs[i]; //avoid memory leak
	//	fireworksPtrs[i] = nullptr; //avoid dangling pointer
	//}

	//fireworksPtrs.clear();//clear memory of the vector
}

void ofApp::setup()
{
	ofSetFrameRate(60);
	ofBackground(0);

	for (int i = 0; i != Amount; i++)
	{
		fireworksPtrs.push_back(new Fireworks(ofRandom(100, ofGetWidth() - 100), ofRandom(ofGetHeight() / 2, ofGetHeight()), ofRandom(-10, 10), ofRandom(-10, 10), 0, ofRandom(5)));
	}

	for (int i = 0; i != Amount; i++)
	{
		fireworksPtrs[i]->setup();
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	for (int i = 0; i != Amount; i++)
	{
		if (fireworksPtrs[i]->getY() > explosionHeight)
		{
			fireworksPtrs[i]->move();
		}
		else
		{
			fireworksPtrs[i]->update();
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
		for (int i = 0; i != Amount; i++)
		{
			if (fireworksPtrs[i]->getY() > explosionHeight)
			{
				fireworksPtrs[i]->display();
			}
			else
			{
				fireworksPtrs[i]->displayParticles();
			}
		}
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
void ofApp::mousePressed(int x, int y, int button)
{	
	Amount += 1;
	fireworksPtrs.push_back(new Fireworks(x, y, ofRandom(-10, 10), ofRandom(-10, 10), 0, ofRandom(5)));
	fireworksPtrs[fireworksPtrs.size() - 1]->setup();
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
