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
	
	if (snake.dead(w, h))
	{
		ofSetBackgroundColor(0);
	}
	else
	{
		ofSetBackgroundColor(255);
	}
		snake.display(bs);
		apple.display(bs);
		if (ofGetFrameNum() % 5 == 0) {//in openFrameworks 'frameCount' is ofGetFrameNum()
			snake.move();
			if (snake.eat(apple)) {
				snake.increaseBody();
				apple.reLocate(w, h);
			}
		}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	snake.keyControl(key);
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
