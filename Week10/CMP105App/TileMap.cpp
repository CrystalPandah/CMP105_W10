// Uses window pointer to render level/section. Tile by Tile.
void TileMap::render(sf::RenderWindow* window)
{
	for (int i = 0; i < (int)level.size(); i++)
	{
		window->draw(level[i]);
	}
}

void TileMap::loadTexture(char* filename)
{
	texture.loadFromFile(filename);
}

//Store procided tileSet
void TileMap::setTileSet(const std::vector<GameObject>& ts)
{
	tileSet = ts;
}

//Stores provided TileMap
void TileMap::setTileMap(const std::vector<int>& tm, sf::Vector2u mapDimensions)
{
	tileMap = tm;
	mapSize = mapDimensions;
}

// Build level/section, by filling a vector with Tile in order.
// TileMap provide the order, TileSet provides the individual Tiles.

void TileMap::buildLevel()
{
	if (tileSet.size() > 0 && tileMap.size() > 0)
	{
		int x, y = 0;
		sf::Vector2f tileSize(tileset[0].getSize().x, tileSet[0].getSize().y);

		for (int = 0; i < (int)tileMap.size(); i++)
		{
			x = i % mapSize.x; //remainder is x
			y = (int)floor(i / mapSize.x); //whole quotient is y
			tileSet[tileMap[i]].setPosition(position.x + (x * tileSize.x), position.y + (y * tileSize.y));
			levelAsset.push_back(tileSet[tileMap[i]]);
			levelAsset[i].setTexture(&texture);
		}
	}
}