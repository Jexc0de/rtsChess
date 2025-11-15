#include "TextureManager.hpp"

TextureManager loadTextures(){
    std::string pieces[] = {"k", "q", "r", "b", "n", "p"}; 
    
    TextureManager BoardTextures;
    BoardTextures.lightTile = std::make_shared<sf::Texture>();
    BoardTextures.lightTile->loadFromFile("Assets/Board/lightgrey.png");

    BoardTextures.darkTile = std::make_shared<sf::Texture>();
    BoardTextures.darkTile->loadFromFile("Assets/Board/darkgrey.png");

    BoardTextures.highlight = std::make_shared<sf::Texture>();
    BoardTextures.highlight->loadFromFile("Assets/Board/highlight.png");

    BoardTextures.smallDot = std::make_shared<sf::Texture>();
    BoardTextures.smallDot->loadFromFile("Assets/Board/LegalMove.png");

    for (int i = 0; i < 6; ++i) {
        auto Wpiece = std::make_shared<sf::Texture>();
        auto Bpiece = std::make_shared<sf::Texture>();

        Wpiece->loadFromFile("Assets/Pieces/" + pieces[i] + "White.png");
        Bpiece->loadFromFile("Assets/Pieces/" + pieces[i] + "Black.png");

        BoardTextures.Whitepieces.push_back(Wpiece);
        BoardTextures.Blackpieces.push_back(Bpiece);
    }

    return BoardTextures;
}