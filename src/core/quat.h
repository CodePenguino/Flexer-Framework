#pragma once

#include "v4.h"
#include "v3.h"

struct quat
{
	constexpr quat(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {};
	constexpr quat() : x(0), y(0), z(0), w(0) {};
	
    constexpr quat conjugate()
    {
        return quat(-x, -y, -z, w);
    }
	
	constexpr quat operator*(const quat& s)
    {
        quat res;
        
        res.w = w * s.w - x * s.x - y * s.y - z * s.z;
        res.x = x * s.w + w * s.x + y * s.z - z * s.y;
        res.y = y * s.w + w * s.y + z * s.x - x * s.z;
        res.z = z * s.w + w * s.z + x * s.y - y * s.x;
        
        return res;
    }
	
    constexpr quat operator*(const v3& s)
    {
        quat res;
        
        res.w = -x * s.x - y * s.y - z * s.z;
        res.x =  w * s.x + y * s.z - z * s.y;
        res.y =  w * s.y + z * s.x - x * s.z;
        res.z =  w * s.z + x * s.y - y * s.x;
        
        return res;
    }
    
    float x, y, z, w;
};