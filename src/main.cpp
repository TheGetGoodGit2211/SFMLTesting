#include "SFML/Window/VideoMode.hpp"
#include "SFML/Window/Window.hpp"
#include <SFML/Graphics.hpp>

int main()
{
  
  unsigned int winWidth = 500;
  unsigned int winHeight = 500;
  const char* winTitle = "SFMLTesting";

  sf::RenderWindow window = sf::RenderWindow{sf::VideoMode(winWidth, winHeight), winTitle};
  window.setFramerateLimit(144);

  const char* imgPath = "./sprites/test.png";
  sf::Texture texture; texture.loadFromFile(imgPath);

  sf::Sprite sprite; sprite.setTexture(texture);

  sprite.scale(5.f, 5.f);

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

    window.clear(sf::Color::White);
    window.draw(sprite);
    window.display();

  }

}
