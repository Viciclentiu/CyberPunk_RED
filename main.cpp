#include <SFML/Graphics.hpp>

int main() {
    // Creăm fereastra (Sintaxa 2.6: lățime, înălțime)
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tester SFML 2.6");

    // Creăm un cerc roșu
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(375.f, 275.f);

    while (window.isOpen()) {
        sf::Event event;

        // Sintaxa 2.6: pollEvent primește obiectul eveniment ca parametru
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Testăm și tastatura: dacă apeși Escape, se închide
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) {
                    window.close();
                }
            }
        }

        window.clear(sf::Color(50, 50, 50)); // Fundal gri închis
        window.draw(shape);
        window.display();
    }

    return 0;
}