#include "Engine.h"
Engine::Engine() {
	init();
}

void Engine::init() {
	window.create(sf::VideoMode(1260, 720), "Game");
}

void Engine::loop() {
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}
	}
}