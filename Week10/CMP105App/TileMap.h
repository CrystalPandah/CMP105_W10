// Map Class
// Builds and store level sections based on TileMap and TileSet

#pragma once
#include <math.h>
#include "GameObject.h"

class TileMap
{
public:
	TileMap();
	~TileMap();

	void loadTexture(char* filename);
	void setTileSet(const std::vector<GameObject>& ts);
	void setTileMap(const std::vector<int>& tm, sf::Vector2u mapDimensions);
	void buildLevel();

	void render(sf::RenderWindow* window);
	std::vector<GameObject>* getLevel() { return &levelAssets; };

	void setPosition(sf::Vector2f pos) { position = pos; }

protected:
	std::vector<GameObject> tileSet;
	std::vector<int> tileMap;
	std::vector<GameObject> levelAssets;
	sf::Texture texture;
	sf::Vector2u mapSize;
	sf::Vector2f position;
};
