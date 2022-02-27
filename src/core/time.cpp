#include "time.h"
#include <GLFW/glfw3.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

namespace Time
{
    float now, last, delta, FPSLimit, globalTimer;
    u64 ticks;
    
    void init(float fps)
    {
        FPSLimit = fps;
        last = 0.0f;
        ticks = 0;
    }
    
    void update()
    {
        now = glfwGetTime();
        delta = now - last;
        
        // Prevents the program from freezing if the FPSLimit is not set
        if(FPSLimit != 0)
        {
            while(glfwGetTime() < last + 1.0f / FPSLimit)
            {
#ifdef _WIN32
                Sleep(0.005);
#else
                sleep(0.005);
#endif
            }
        }
        
        last = now;
        ticks++;
        
        globalTimer += delta;
    }
    
    inline f32 getFPS()
    {
        return 1.0f / delta;
    }
};
