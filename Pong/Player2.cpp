#include "Player2.h"
Player2::Player2(sf::Vector2f position)
{
    
    pTexture = new sf::Texture();
    pSprite = new sf::Sprite();
    pTexture->loadFromFile("/Users/Thomas/Desktop/Pong/Pong/PongPlayer.png");
    pSprite->setTexture(*pTexture);
    pSprite->setPosition(position);
    pSprite->setOrigin(0,0 );
    }

Player2::~Player2()
{
}




void Player2::Render(sf::RenderWindow *rw)
{
  rw->draw(*pSprite);
};




void Player2::HandleEvents()
{
};




void Player2::Update(double frametime)
{
    if (pSprite->getPosition().y < 700)
    {
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        {
            pSprite->move(0, 300*frametime);
        }
    }
    if (pSprite->getPosition().y > 0)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        {
            pSprite->move(0, -300*frametime);
        }
    }
    
};