#pragma once

#include "ofMain.h"
#include "Triangle.h"

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

		void mouseScrolled(int x, int y, float scrollX, float scrollY);

		ofEasyCam cam;
		ofBoxPrimitive box;
		ofSpherePrimitive sphere;
		of3dPrimitive trianglePrimitive;
		ofMesh triangleMesh;
		vector <Triangle> triangles;
		Triangle tempTriangle;
		double sphereRot = 0;

		vector<ofPoint> vertices;
		
};
