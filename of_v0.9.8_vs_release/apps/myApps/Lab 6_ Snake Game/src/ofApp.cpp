#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);


	w = 30;
	h = 30;
	bs = 20;

	apple = Apple(w, h);
	snake = Snake(w, h);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	switch (screen)
	{
	case 0:
		ofSetBackgroundColor(0, 168, 107);
		
		break;

	case 1:
	case 2:
		//if (snake.dead(w, h))
		//{
		//	ofSetBackgroundColor(0);
		//}
		//else
		//{
		//	ofSetBackgroundColor(255);
		//}
		ofSetBackgroundColor(255);
		snake.display(bs);
		apple.display(bs);
		if (ofGetFrameNum() % 5 == 0)
		{
			{
				if (screen == 1)
				{
					snake.move();
				}

				if (snake.eat(apple))
				{
					snake.increaseBody();
					apple.reLocate(w, h);
				}
			}
		}
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	snake.keyControl(key);

	if (key == 13 && screen == 0)
	{
		screen = 1;
	}
	else if (key == 32 && screen == 1)
	{
		screen = 2;
	}
	else if (key == 32 && screen == 2)
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
