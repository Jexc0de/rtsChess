#pragma once
#include <SFML/Graphics.hpp>
#include<memory>
#include<vector>

struct TextureManager{
    std::shared_ptr<sf::Texture> lightTile;
    std::shared_ptr<sf::Texture> darkTile;
    std::shared_ptr<sf::Texture> highlight;
    std::shared_ptr<sf::Texture> smallDot;
    std::vector<std::shared_ptr<sf::Texture>> Whitepieces;
    std::vector<std::shared_ptr<sf::Texture>> Blackpieces;
};

TextureManager loadTextures();