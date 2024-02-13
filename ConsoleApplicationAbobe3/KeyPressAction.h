#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace sf;

class KeyPressAction {
private:
	Player* player;
public:
	KeyPressAction();
	void setPlayer(Player* player);
	void action();
	
};