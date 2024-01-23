#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"

using namespace sf;
using namespace std;

class Engine {
public:
	RenderWindow window;
	Engine();
	void init();
	void loop();
	Player player;
	void draw();
	
};
