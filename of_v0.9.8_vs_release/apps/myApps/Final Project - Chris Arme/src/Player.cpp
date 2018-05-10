#include "Player.h"

void Player::addBullet(ofQuaternion dir)
{
	bullets.push_back(ofBoxPrimitive(5, 5, 5));
	bullets.back().setOrientation(dir);
	bullets.back().setGlobalPosition(0, 0, 0);
}

void Player::update()
{
	for (int i = 0; i < bullets.size(); i++)
	{
		ofVec3f test = bullets[i].getOrientationEuler();

		bullets[i].setPosition(bullets[i].getPosition() + (bullets[i].getLookAtDir() * 7));
	}

	checkAndRemoveBullet();
}

void Player::checkAndRemoveBullet()
{
	for (int i = bullets.size() - 1; i > -1; i--)
	{
		if (abs(bullets[i].getX()) >= 600)
		{
			bullets.erase(bullets.begin() + i);
		}
		else if (abs(bullets[i].getY()) >= 600)
		{
			bullets.erase(bullets.begin() + i);
		}
		else if (abs(bullets[i].getZ()) >= 600)
		{
			bullets.erase(bullets.begin() + i);
		}
	}
}

void Player::draw()
{
	ofSetColor(200, 0, 0);

	for (ofBoxPrimitive bullet : bullets)
	{
		bullet.draw();
	}
}

void Player::destroyBulletAtIndex(int index)
{
	bullets.erase(bullets.begin() + index);
}

int Player::getBulletSize()
{
	return bullets.size();
}

ofVec3f Player::getBulletPosAtIndex(int index)
{
	return bullets[index].getPosition();
}