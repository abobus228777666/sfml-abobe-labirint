#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace sf;

const int WINDOW_WIDTH = 1260;
const int WINDOW_HEIGHT = 720;
const int WIDTH_MAP = 21;
const int HEIGHT_MAP = 12;

class Map {
public:
	Map();
	void draw(RenderWindow& window);
private:
	Image mapImage;
	Texture mapTexture;
	Sprite mapSprite;
	void init();
	Player player;

	String TileMap[HEIGHT_MAP] = {

"sssssssssssssssssssss",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sssssssssssssssssssss"

	};

};