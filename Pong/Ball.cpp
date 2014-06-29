#include "Ball.h"
Ball::Ball(sf::Vector2f position)
{
    movespeed = 300;
    movespeed2 = 300;
    pTexture = new sf::Texture();
    pSprite = new sf::Sprite();
    pTexture->loadFromFile("/Users/Thomas/Downloads/PBall.png");
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
    
    if (pSprite->getPosition().y < 880 && pSprite->getPosition().y > 0  && pSprite->getPosition().x <= 1580 && pSprite->getPosition().x > 0)
    {
        
        pSprite->move(movespeed*frametime, movespeed2/2*frametime);
    }
    
}