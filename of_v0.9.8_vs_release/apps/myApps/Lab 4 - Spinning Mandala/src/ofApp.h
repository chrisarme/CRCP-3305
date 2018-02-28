#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

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

		double shapeRotate = 0;
		double squarePosition = 0;

		ofTrueTypeFont myFont;
		double colorNumber = 0;
		double rainbowColor[3];
		
		void drawStar(double midX, double midY)
		{
			ofBeginShape();
			for (int i = 0; i < 2; i++)
			{
				ofVertex((25 * cos(45 * i)) + (50 * cos(75 + (45 * i))), (25 * sin(45 * i)) + (50 * sin(75 + (45 * i))));
				ofVertex((25 * cos(45 * i)) + (75 * cos(90 + (45 * i))), (25 * sin(45 * i)) + (75 * sin(90 + (45 * i))));
				ofVertex((25 * cos(45 * i)) + (50 * cos(105 + (45 * i))), (25 * sin(45 * i)) + (50 * sin(105 + (45 * i))));
			}
			ofEndShape();
		};
};
