#include "SFML/Window/Window.hpp"
#include <SFML/Graphics.hpp>

int main()
{
  sf::RenderWindow window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
  window.setFramerateLimit(144);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }

    window.clear();
    window.display();
  }
}
