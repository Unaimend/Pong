#ifndef __Pong__Player__
#define __Pong__Player__
#include <SFML/Graphics.hpp>




class Player
{
public:                 //FUNCTIONS
    Player(){};
    ~Player(){};
public:
    
protected:              //FUNCTIONS
    
protected:
    
private:                //FUNCTIONS
    void                HandleEvents();
    void                Render();
    void                Update(double frametime);
private:
    sf::Vector2f        pSize;

};
#endif /* defined(__Pong__Player__) */
