#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(60);

	fontSmall.loadFont("ethnocen.ttf", 20);
	fontMed.loadFont("ethnocen.ttf", 45);
	fontLarge.loadFont("ethnocen.ttf", 70);

	cam.setDistance(1);
	//cam.setOrientation(ofQuaternion(0, 1, 1, 1));
}

//--------------------------------------------------------------
void ofApp::update()
{
	bool alreadyDestroyed = false;

	switch (screen)
	{
	case 0:

		break;

	case 1:
		player.update();
		enemies.update();

		if (ofGetFrameNum() % 120 == 0)
		{
			enemies.createNewEnemy();
		}

		for (int j = enemies.getEnemySize() - 1; j > -1; j--)
		{
			ofVec3f enemyPos = enemies.getEnemyPosAtIndex(j);

			// check for end game
			if (ofDist(enemyPos.x, enemyPos.y, enemyPos.z, 0, 0, 0) <= 30)
			{
				screen = 2;
				ofDisableDepthTest();
			}

			for (int i = player.getBulletSize() - 1; i > -1; i--)
			{
				if (!alreadyDestroyed)
				{
					ofVec3f bulletPos = player.getBulletPosAtIndex(i);

					if (ofDist(bulletPos.x, bulletPos.y, bulletPos.z, enemyPos.x, enemyPos.y, enemyPos.z) <= 22)
					{
						player.destroyBulletAtIndex(i);
						enemies.destroyEnemyAtIndex(j);
						score++;

						alreadyDestroyed = true;
					}
				}
			}
		}

		break;

	case 2:

		break;
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	switch (screen)
	{
	case 0:
		ofSetBackgroundColor(50);

		ofSetColor(255);
		fontLarge.drawString("KillOrb", ofGetWidth() / 2 - fontLarge.stringWidth("KillOrb") / 2, 150 + fontLarge.stringHeight("KillOrb") / 2);

		fontSmall.drawString("Click and Hold the left mouse button to look around", ofGetWidth() / 2 - fontSmall.stringWidth("Click and Hold the left mouse button to look around") / 2, ofGetHeight() / 2  + fontSmall.stringHeight("Click and Hold the left mouse button to look around") / 2);
		fontSmall.drawString("Press space to shoot", ofGetWidth() / 2 - fontSmall.stringWidth("Press space to shoot") / 2, ofGetHeight() / 2 + 50 + fontSmall.stringHeight("Press space to shoot") / 2);
		fontSmall.drawString("Kill as many Orbs as possible before they get to you!", ofGetWidth() / 2 - fontSmall.stringWidth("Kill as many Orbs as possible before they get to you!") / 2, ofGetHeight() / 2 + 150 + fontSmall.stringHeight("Kill as many Orbs as possible before they get to you!") / 2);

		ofSetColor(0);
		ofRect(ofGetWidth() / 2 - 205, ofGetHeight() / 2 + 195, 410, 110);

		ofSetColor(255);
		ofRect(ofGetWidth() / 2 - 200, ofGetHeight() / 2 + 200, 400, 100);

		ofSetColor(0);
		fontMed.drawString("START", ofGetWidth() / 2 - fontMed.stringWidth("START") / 2, ofGetHeight() / 2 + 250 + fontMed.stringHeight("START") / 2);

		
		break;

	case 1:
		ofSetColor(0, 0, 200);
		fontMed.drawString("SCORE: " + to_string(score), 0, fontMed.stringHeight("SCORE"));

		ofSetBackgroundColor(255);

		cam.begin();

		player.draw();
		enemies.draw();

		/*ofSetColor(0);
		ofDrawBox(0, 0, 100, 20, 20, 20);

		ofSetColor(0);
		ofDrawBox(0, 0, -100, 20, 20, 20);

		ofSetColor(0);
		ofDrawBox(100, 0, 0, 20, 20, 20);

		ofSetColor(0);
		ofDrawBox(-100, 0, 0, 20, 20, 20);*/

		cam.end();
		break;

	case 2:
		ofSetBackgroundColor(0);

		ofSetColor(255);
		fontLarge.drawString("GAME OVER", ofGetWidth() / 2 - fontLarge.stringWidth("GAME OVER") / 2, 150 + fontLarge.stringHeight("GAME OVER") / 2);

		ofSetColor(255);
		fontMed.drawString("Final Score: " + to_string(score), ofGetWidth() / 2 - fontMed.stringWidth("Final Score: " + to_string(score)) / 2, ofGetHeight() / 2 + 250 + fontMed.stringHeight("Final Score: " + to_string(score)) / 2);

		ofSetColor(255);
		fontSmall.drawString("Press SPACE to return to the main menu", ofGetWidth() / 2 - fontSmall.stringWidth("Press SPACE to return to the main menu") / 2, ofGetHeight() / 2 + 150 + fontSmall.stringHeight("Press SPACE to return to the main menu") / 2);

		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	switch (screen)
	{


	case 1:
		if (key == ' ')
		{
			player.addBullet(cam.getOrientationQuat());
			canShoot = false;
		}
		break;

	case 2:

		if (key == ' ')
		{
			screen = 0;
			score = 0;
			player = Player();
			enemies = Enemies();
		}
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
	if (key == ' ')
	{
		canShoot = true;
	}
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
	switch (screen)
	{
	case 0:
		if ((x > ofGetWidth() / 2 - 205 && x < ofGetWidth() / 2 + 205) && (y > ofGetHeight() / 2 + 195 && y < ofGetHeight() / 2 + 305))
		{
			screen = 1;
			ofEnableDepthTest();
		}

		break;
	}
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
