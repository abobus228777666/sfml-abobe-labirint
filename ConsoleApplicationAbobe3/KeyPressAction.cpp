#include "KeyPressAction.h"
#include "iostream"

using namespace std;

KeyPressAction::KeyPressAction() {

}

void KeyPressAction::setPlayer(Player* player) {
	this->player = player;
}

void KeyPressAction::action() {
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		player->setSpeed(Vector2f(0.1, 0));
		Vector2f player_speed = player->getSpeed();
		cout << "move right1: ";
		cout << player_speed.x << endl;
		
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 3 * 120, 80, 120));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Left)) {
		player->setSpeed(Vector2f(-0.1, 0));
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 2 * 120, 80, 120));
	}
	if (Keyboard::isKeyPressed(Keyboard::Up)) {
		
		Vector2f player_speed = player->getSpeed();
		cout << "move up: ";
		cout << player_speed.y << endl;
		player->setSpeed(Vector2f(0, 0.1));
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 0 * 120, 80, 120));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down)) {
		player->setSpeed(Vector2f(0, -0.1));
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 1 * 120, 80, 120));
	}
	else {
		player->setSpeed(Vector2f(0, 0));
	}

	player->currentFrame = player->currentFrame + 0.005;
	if (player->currentFrame > 4) {
		player->currentFrame = 0;
	}
}
