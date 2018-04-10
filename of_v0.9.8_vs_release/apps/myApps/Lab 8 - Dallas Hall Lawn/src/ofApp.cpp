#include "ofApp.h"

//--------------------------------------------------------------

ofApp::~ofApp()//destructor
{
	////Why not using delete[] particlePtr; ?
	//for (int i{}; i != fireworkAmount; i++)
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

	for (int i = 0; i != fireworkAmount; i++)
	{
		fireworksPtrs.push_back(new Fireworks(ofRandom(50, ofGetWidth() - 50), ofRandom(ofGetHeight() - 200, ofGetHeight()), ofRandom(-10, 10), ofRandom(-10, 10), ofRandom(-5, 5), ofRandom(-5, 5)));
	}

	for (int i = 0; i != raindropAmount; i++)
	{
		raindropsPtrs.push_back(new Raindrop(ofGetWidth() / 2, ofGetHeight() - 175, 3));
	}

	for (int i = 0; i != fireworkAmount; i++)
	{
		fireworksPtrs[i]->setup();
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
	if (ofRandom(100) > 99)
	{
		fireworkAmount += 1;
		fireworksPtrs.push_back(new Fireworks(ofRandom(50, ofGetWidth() - 50), ofRandom(ofGetHeight() - 180, ofGetHeight()), ofRandom(-10, 10), ofRandom(-10, 10), ofRandom(-5, 5), ofRandom(-5, 5)));
		fireworksPtrs[fireworksPtrs.size() - 1]->setup();
	}

	for (int i = 0; i != fireworkAmount; i++)
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

	for (int i = fireworkAmount; i != 0; i--)
	{
		if (!fireworksPtrs[i - 1]->areParticlesVisible())
		{
			delete fireworksPtrs[i - 1]; //avoid memory leak
			fireworksPtrs[i - 1] = nullptr; //avoid dangling pointer
			fireworksPtrs.erase(fireworksPtrs.begin() + i - 1);
			fireworkAmount--;
		}
	}

	for (int i = 0; i != raindropAmount; i++)
	{
		raindropsPtrs[i]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
		for (int i = 0; i != fireworkAmount; i++)
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

		// Draw Dallas Hall
		ofSetColor(80, 10, 0);
		ofDrawRectangle(150, ofGetHeight() - 400, ofGetWidth() - 300, 200);
		ofSetCircleResolution(50);
		ofDrawCircle(ofGetWidth() / 2, ofGetHeight() - 375, 150);

		ofSetColor(0, 92, 9);
		ofDrawRectangle(0, ofGetHeight() - 200, ofGetWidth(), 200);

		ofSetColor(255);
		ofDrawRectangle(200, ofGetHeight() - 175, ofGetWidth() - 400, 25);

		for (int i = 0; i != raindropAmount; i++)
		{
			raindropsPtrs[i]->draw();
		}

		// THIS IS JUST TO MAKE SURE THAT MEMORY IS BEING CORRECTLY ALLOCATED
		//for (int i = 0; i != fireworksPtrs.size(); i++)
		//{
		//	ofSetColor(255);
		//	ofDrawRectangle((20 * i) + 50, 50, 10, 10);
		//}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	
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
	fireworkAmount += 1;
	fireworksPtrs.push_back(new Fireworks(ofRandom(50, ofGetWidth() - 50), ofRandom(ofGetHeight() - 180, ofGetHeight()), ofRandom(-10, 10), ofRandom(-10, 10), ofRandom(-5, 5), ofRandom(-5, 5)));
	fireworksPtrs[fireworksPtrs.size() - 1]->setup();

	//fireworkAmount += 1;
	//fireworksPtrs.push_back(new Fireworks(x, y, ofRandom(-10, 10), ofRandom(-10, 10), 0, ofRandom(5)));
	//fireworksPtrs[fireworksPtrs.size() - 1]->setup();
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
