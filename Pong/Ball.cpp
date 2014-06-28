#include "Ball.h"
Ball::Ball(sf::Vector2f position)
{
    
    pTexture = new sf::Texture();
    pSprite = new sf::Sprite();
    pTexture->loadFromFile("/Users/Thomas/Downloads/PBALL.png");
    pSprite->setTexture(*pTexture);
    pSprite->setPosition(position);
    pSprite->setOrigin(0,0 );
    
}




Ball::~Ball()
{
}




void Ball::Render(sf::RenderWindow *rw)
{
    rw->draw(*pSprite);
};




void Ball::Update(double frametime)
{
    if (pSprite->getPosition().y < 700)
    {
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
        {
            pSprite->move(-200*frametime, 0);
        }
    }
    if (pSprite->getPosition().y > 0)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E))
        {
            pSprite->move(200*frametime, 0);
        }
    }
    
};