#pragma once

#include "../common/util.h"

namespace Time
{
    extern float now, last, delta, FPSLimit, globalTimer;
    extern u64 ticks;
    
    void init(float fps);
    void update();
    inline f32 getFPS();
};