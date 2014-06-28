#ifndef __Pong__Ball__
#define __Pong__Ball__
#include <SFML/Graphics.hpp>




class Ball
{
public:                 //FUNCTIONS
    void                Render(sf::RenderWindow *rw);
    sf::Sprite getBall(){return *pSprite;};
    void setPosition(sf::Vector2f newpos){mPos = newpos;};
    void                Update(double frametime);
    Ball(sf::Vector2f position);
    ~Ball();
public:
    
protected:              //FUNCTIONS
    
protected:
    
private:                //FUNCTIONS

private:
    sf::RectangleShape *pBall;
    sf::Vector2f *pSize;
    sf::Sprite          *pSprite;
    sf::Texture         *pTexture;
    sf::Vector2f mPos;
};
#endif /* defined(__Pong__Ball__) */
