#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
class Pawn;

class Tile
{
    int id{};
    int width{};
    int height{};
    Pawn* currentPawn;
    sf::Texture texture;
    sf::Sprite sprite;
public:
    Tile();
    Tile(int x, int y, int rotateDeg, string texturePath);

    void drawTile(sf::RenderWindow* window);
    void setId(int id);
    void setCurrentPawn(Pawn* pawn);

    int getId() const;
    int getWidth() const;
    int getHeight() const;
    int getPositionX() const;
    int getPositionY() const;
    Pawn* getCurrentPawn();
    sf::Sprite getSprite() const;
    inline bool isClicked(sf::Event event) const {
        return this->sprite
            .getGlobalBounds()
            .contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y));
    }
private:
    void initSprite(string texturePath, int x, int y, int rotateDeg);
};