#pragma once

#include "../common/util.h"
#include <math.h>

struct v2
{
    public:
	constexpr v2(float x, float y) : x(x), y(y) {}
	v2() = default;
    
	constexpr f32 length()
    {
        return sqrtf(x * x + y * y);
    }
    
	constexpr f32 dot(v2& vec)
    {
        return x * vec.x + y * vec.y;
    }
	
    constexpr v2 normalize()
    {
        f32 length = v2::length();
        
        x /= length;
        y /= length;
        
        return *this;
    }
    
    constexpr v2 rotate(f32 angle)
    {
        angle = (float)degrees_to_radians(angle);
        
        return v2(x * cosf(angle) - y * sinf(angle), x * sinf(angle) + y * cosf(angle));
    }
	
    constexpr v2 operator+(const v2& s)
    {
        return v2(x + s.x, y + s.y);
    }
    
    constexpr v2 operator+(float s)
    {
        return v2(x + s, y + s);
    }
    
    constexpr v2 operator-(const v2& s)
    {
        return v2(x - s.x, y - s.y);
    }
    
    constexpr v2 operator-(float s)
    {
        return v2(x - s, y - s);
    }
    
    constexpr v2 operator*(const v2& s)
    {
        return v2(x * s.x, y * s.y);
    }
    
    constexpr v2 operator*(float s)
    {
        return v2(x * s, y * s);
    }
    
    constexpr v2 operator/(const v2& s)
    {
        return v2(x / s.x, y / s.y);
    }
    
    constexpr v2 operator/(float s)
    {
        return v2(x / s, y / s);
    }
    
    // ------------------------------------
    
    constexpr void operator+=(const v2& s)
    {
        x += s.x; y += s.y;
    }
    
    constexpr void operator+=(float s)
    {
        x += s; y += s;
    }
    
    constexpr void operator-=(const v2& s)
    {
        x -= s.x; y -= s.y;
    }
    
    constexpr void operator-=(float s)
    {
        x -= s; y -= s;
    }
    
    constexpr void operator*=(const v2& s)
    {
        x *= s.x; y *= s.y;
    }
    
    constexpr void operator*=(float s)
    {
        x *= s; y *= s;
    }
    
    constexpr void operator/=(const v2& s)
    {
        x /= s.x; y /= s.y;
    }
    
    constexpr void operator/=(float s)
    {
        x /= s; y /= s;
    }
    
    constexpr void operator=(const v2& s)
    {
        x = s.x; y = s.y;
    }
    
    constexpr void operator=(float s)
    {
        x = s; y = s;
    }
    
    constexpr inline v2 operator-() const
    {
        return v2(-x, -y);
    }
    
	float x, y;
};
