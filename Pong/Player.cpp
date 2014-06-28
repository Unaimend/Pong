#include "Player.h"
Player::Player(sf::Vector2f position)
{
    pTexture = new sf::Texture();
    pSprite = new sf::Sprite();
    pTexture->loadFromFile("/Users/Thomas/Downloads/PongPlayer.png");
    pSprite->setTexture(*pTexture);
    pSprite->setPosition(position);
    pSprite->setOrigin(0,0 );
}




Player::~Player()
{
}




void Player::Render(sf::RenderWindow *rw)
{
    rw->draw(*pSprite);
};




void Player::Update(double frametime)
{
    if (pSprite->getPosition().y < 700)
    {
     
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        {
            pSprite->move(0, 200*frametime);
        }
    }
    if (pSprite->getPosition().y > 0)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        {
            pSprite->move(0, -200*frametime);
        }
    }

};