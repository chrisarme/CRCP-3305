#pragma once
#include "ofMain.h"
#include "../Snake.h"
#include "../Apple.h"

class ofApp : public ofBaseApp
{

	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		int w;
		int h;
		int bs;

		int screen = 0; // 0 = start, 1 = play, 2 = pause, 3 = game over

		Apple apple;
		Snake snake;
};
