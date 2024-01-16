#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

class Engine {
public:
	RenderWindow window;
	Engine();
	void init();
	void loop();

};