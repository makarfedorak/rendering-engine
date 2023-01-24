#include <SFML/Graphics.hpp>

int main() {
    // create window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game Render Engine");

    // load texture
    sf::Texture texture;
    if (!texture.loadFromFile("player.png")) {
        std::cerr << "Error loading texture" << std::endl;
        return 1;
    }

    // create sprite
    sf::Sprite player(texture);
    player.setPosition(400, 300);

    // run game loop
    while (window.isOpen()) {
        // handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // update game state

        // render
        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}
