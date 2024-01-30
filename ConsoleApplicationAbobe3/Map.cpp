#include "Map.h"

void Map::init() {
	mapImage.loadFromFile("images/textures.jpg");
	mapTexture.loadFromImage(mapImage);
	mapSprite.setTexture(mapTexture);
}

Map::Map(){
	init();
}

void Map::draw(RenderWindow& window) {
	for (int h = 0; h < HEIGHT_MAP; h++) {
		for (int w = 0; w < WIDTH_MAP; w++) {
			if (TileMap[h][w] == 's') {
				mapSprite.setTextureRect(IntRect(0, 0, 60, 60));
			}
			if (TileMap[h][w] == 'g') {
				mapSprite.setTextureRect(IntRect(60 * 0, 60 * 1, 60, 60));
			}
			mapSprite.setPosition(w * 60, h * 60);
			window.draw(mapSprite);
		}
	}
	window.draw(player.getSprite());
}