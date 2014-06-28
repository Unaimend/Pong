#include "Framework.h"
#include "SFML/Graphics.hpp"




Framework::Framework()
{
    pRenderWindow = new sf::RenderWindow(sf::VideoMode(1600,900,32), "PONG by Thomas Dost");
    pMainEvent = new sf::Event;
    pClock = new sf::Clock;
    pPlayer = new Player(sf::Vector2f(30,500));
    pPlayer2 = new Player2(sf::Vector2f(1550,500));
};



Framework::~Framework()
{
//    delete pRenderWindow;
//    delete pMainEvent;
//    
//    pRenderWindow   = nullptr;
//    pMainEvent      = nullptr;
};




void Framework::Run()
{
    while (mRun)
    {
        Update(mFrametime);
        HandleEvents();
        Render();
        GetFrameTime();
    }

};


void Framework::Render()
{
    pRenderWindow->clear(sf::Color(120,0,120,255));
    pPlayer->Render(pRenderWindow);

    pPlayer2->Render(pRenderWindow);
  
    pRenderWindow->display();
};




void Framework::Update(double frametime)
{
    pPlayer->Update(frametime);
    pPlayer2->Update(frametime);
};





void Framework::HandleEvents()
{
    while (pRenderWindow->pollEvent(*pMainEvent))
    {
        if (pMainEvent->type == sf::Event::Closed)
        {
            mRun = false;
        }
        pPlayer->HandleEvents();
        pPlayer2->HandleEvents();
    }
};




void Framework::GetFrameTime()
{
    mFrametime = pClock->getElapsedTime().asSeconds();
    // std::cout << mFrameTime << std::endl;
    pClock->restart();
    
}
