#ifndef __Pong__Player__
#define __Pong__Player__
#include <SFML/Graphics.hpp>




class Player
{
public:                 //FUNCTIONS
    Player(sf::Vector2f position);
    sf::RectangleShape getPlayer(){return *pPlayer;};
    ~Player();
    void                Render(sf::RenderWindow *rw);
    void                Update(double frametime);
public:
    
protected:              //FUNCTIONS
    
protected:
    
private:                //FUNCTIONS

private:
    sf::Vector2f        *pSize;
    sf::RectangleShape  *pPlayer;
    sf::Sprite          *pSprite;
    sf::Texture         *pTexture;

};
#endif /* defined(__Pong__Player__) */
