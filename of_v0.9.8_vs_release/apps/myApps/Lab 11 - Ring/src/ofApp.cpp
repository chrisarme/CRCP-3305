#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(60);
	ofEnableDepthTest();
	cam.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 600);

	int pointMax = 100;

	ringPoints.push_back(vector<ofPoint>());

	for (int i = 0; i < pointMax; i++)
	{
		if (i % 2 == 0)
		{
			ringPoints[0].push_back(ofPoint(100 * sin(i * (2 * PI / pointMax)), 100 * cos(i * (2 * PI / pointMax)), -20));
		}
		else
		{
			ringPoints[0].push_back(ofPoint(150 * sin(i * (2 * PI / pointMax)), 150 * cos(i * (2 * PI / pointMax)), -20));
		}
	}

	ringPoints.push_back(vector<ofPoint>());

	for (int i = 0; i < pointMax; i++)
	{
		if (i % 2 == 0)
		{
			ringPoints[1].push_back(ofPoint(100 * sin(i * (2 * PI / pointMax)), 100 * cos(i * (2 * PI / pointMax)), 20));
		}
		else
		{
			ringPoints[1].push_back(ofPoint(150 * sin(i * (2 * PI / pointMax)), 150 * cos(i * (2 * PI / pointMax)), 20));
		}
	}

	//Step 2: add vertices to the mesh (multiple way), then add indices of the vertices to determine face for the 3D obj

	for (int a = 0; a < ringPoints.size(); a++)
	{
		for (int i = 0; i < pointMax - 2; i++)
		{
			if (i % 2 == 0)
			{
				ringMesh.addVertex(ringPoints[a][i + 1]); ringMesh.addVertex(ringPoints[a][i]); ringMesh.addVertex(ringPoints[a][i + 2]);
			}
			else
			{
				ringMesh.addVertex(ringPoints[a][i]); ringMesh.addVertex(ringPoints[a][i + 1]); ringMesh.addVertex(ringPoints[a][i + 2]);
			}
		}

		ringMesh.addVertex(ringPoints[a][pointMax - 1]); ringMesh.addVertex(ringPoints[a][pointMax - 2]); ringMesh.addVertex(ringPoints[a][0]);
		ringMesh.addVertex(ringPoints[a][pointMax - 1]); ringMesh.addVertex(ringPoints[a][0]); ringMesh.addVertex(ringPoints[a][1]);
	}

	for (int i = 0; i < pointMax - 2; i++)
	{
		ringMesh.addVertex(ringPoints[1][i]); ringMesh.addVertex(ringPoints[1][i + 2]); ringMesh.addVertex(ringPoints[0][i + 2]);
		ringMesh.addVertex(ringPoints[0][i]); ringMesh.addVertex(ringPoints[1][i]); ringMesh.addVertex(ringPoints[0][i + 2]);
	}

	ringMesh.addVertex(ringPoints[1][pointMax - 2]); ringMesh.addVertex(ringPoints[1][0]); ringMesh.addVertex(ringPoints[0][0]);
	ringMesh.addVertex(ringPoints[0][pointMax - 2]); ringMesh.addVertex(ringPoints[1][pointMax - 2]); ringMesh.addVertex(ringPoints[0][0]);
	ringMesh.addVertex(ringPoints[1][pointMax - 1]); ringMesh.addVertex(ringPoints[1][1]); ringMesh.addVertex(ringPoints[0][1]);
	ringMesh.addVertex(ringPoints[0][pointMax - 1]); ringMesh.addVertex(ringPoints[1][pointMax - 1]); ringMesh.addVertex(ringPoints[0][1]);

	//Add indices of the vertices to the mesh to determine faces.
	ringMesh.setupIndicesAuto();//calculate the indices based on the vertices.
	setNormals();//calculate the normal (normal vectors) of all vertices
	light.enable();//based on normals, we can have a easy light effect.

				  //Adding Texture to the obj
				  //... Step 1: load image
	//image.load("sunflower.png");
	//... Step 2: Set up a texture coordinates for all the vertices
	//ringMesh.addTexCoord(ofPoint(100, 100));	//v3
	//ringMesh.addTexCoord(ofPoint(10, 300));		//v2
	//ringMesh.addTexCoord(ofPoint(10, 10));		//v0
	//ringMesh.addTexCoord(ofPoint(100, 100));	//v3
	//ringMesh.addTexCoord(ofPoint(300, 10));		//v1
	//ringMesh.addTexCoord(ofPoint(10, 300));		//v2
	//ringMesh.addTexCoord(ofPoint(100, 100));	//v3
	//ringMesh.addTexCoord(ofPoint(10, 10));		//v0
	//ringMesh.addTexCoord(ofPoint(300, 10));		//v1
	//ringMesh.addTexCoord(ofPoint(100, 100));    //v0
	//ringMesh.addTexCoord(ofPoint(10, 300));		//v1
	//ringMesh.addTexCoord(ofPoint(10, 10));		//v2
}

void ofApp::setNormals()//general normal calculation
{
	//The number of the vertices
	size_t nV{ ringMesh.getNumVertices() };//The number of the vertices//in this case, 12
	size_t nT{ ringMesh.getNumIndices()};//number of indices
												//calculate all normals (you don't need change any code from this part since it fits all 3D object creating)
	vector<ofPoint> norm{ nV };            //Array for the normals
										   //Scan all the triangles. For each triangle add its
										   //normal to norm's vectors of triangle's vertices
	for (size_t t{}; t < nT; t += 3)
	{
		//Get indices of the triangle t
		unsigned int i1{ ringMesh.getIndex(t) };
		unsigned int i2{ ringMesh.getIndex(t + 1) };
		unsigned int i3{ ringMesh.getIndex(t + 2) };
		//Get vertices of the triangle
		const ofPoint &v1{ ringMesh.getVertex(i1) };
		const ofPoint &v2{ ringMesh.getVertex(i2) };
		const ofPoint &v3{ ringMesh.getVertex(i3) };
		//Compute the triangle's normal
		ofPoint dir{ ((v3 - v1).cross(v2 - v1)).getNormalized() };
		//Accumulate it to norm array for i1, i2, i3
		norm[i1] += dir;
		norm[i2] += dir;
		norm[i3] += dir;
	}
	//Normalize the normal's length
	for (int i{}; i < nV; i++)
		norm[i].normalize();
	//Set the normals to mesh
	ringMesh.clearNormals();
	ringMesh.addNormals(norm);
}

//--------------------------------------------------------------
void ofApp::update(){
	angle += 1;

	if (colorNumber >= 255)
	{
		colorNumber = 0;
	}

	colorNumber += .25;

	rainbow = ofColor().fromHsb(colorNumber, 255, 255);
}

//--------------------------------------------------------------
void ofApp::draw()
{
	cam.begin();
	ofPushMatrix();
	ofTranslate(0, 0, -50);
	ofBackgroundGradient(ofColor{ 255 }, ofColor{ 0 });
	ofPopMatrix();
	
	ofPushMatrix();
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofRotate(angle, 1, .5, .6);
	ofSetColor(rainbow);
	ringMesh.draw();
	//ringMesh.drawFaces();
	//ringMesh.drawWireframe();
	//ringMesh.drawVertices();
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
