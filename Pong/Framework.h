#ifndef __Pong__Framework__
#define __Pong__Framework__
#include <SFML/Graphics.hpp>
#include "Player.h"

class Framework
{
public:                 //FUNCTIONS
    
                        Framework();
                        ~Framework();
    void                Run();
public:
    
protected:              //FUNCTIONS
    
    
protected:
    
private:                //FUNCTIONS
    void                HandleEvents();
    void                Render();
    void                Update(double frametime);
    void                GetFrameTime();
private:
    sf::Clock           *pClock;
    double              mFrametime;
    sf::RenderWindow    *pRenderWindow;
    sf::Event           *pMainEvent;
    bool mRun =         true;
    Player              *pPlayer;
};

#endif /* defined(__Pong__Framework__) */
