#ifndef __Pong__Framework__
#define __Pong__Framework__
#include <SFML/Graphics.hpp>

class Framework
{
public:             //FUNCTIONS
    
                    Framework();
    ~Framework();
    void            Run();
public:
    
protected:          //FUNCTIONS
    
    
protected:
    
private:            //FUNCTIONS
    void            HandleEvents();
    void            Render();
    void            Update();
    void            GetFrameTime();
private:


};

#endif /* defined(__Pong__Framework__) */
