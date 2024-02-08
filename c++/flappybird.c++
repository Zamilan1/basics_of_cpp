#include <SFML/Graphics.hpp>

int main() {
    // Window settings
    sf::RenderWindow window(sf::VideoMode(800, 600), "Flappy Bird");

    // Bird settings
    sf::RectangleShape bird(sf::Vector2f(50, 50));
    bird.setPosition(100, 300);
    bird.setFillColor(sf::Color::Yellow);

    // Gravity
    float gravity = 0.5f;
    float velocity = 0.0f;

    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
                velocity = -10.0f; // Jump when space is pressed
        }

        // Update bird position
        velocity += gravity;
        bird.move(0, velocity);

        // Check for collisions with the ground
        if (bird.getPosition().y + bird.getSize().y > 600) {
            bird.setPosition(bird.getPosition().x, 600 - bird.getSize().y);
            velocity = 0;
        }

        // Clear the window
        window.clear();

        // Draw bird
        window.draw(bird);

        // Display the content of the window
        window.display();
    }

    return 0;
}
