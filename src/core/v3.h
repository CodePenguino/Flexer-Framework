#pragma once

#include "../common/util.h"

struct v3
{
    public:
    
    constexpr v3(float x, float y, float z) : x(x), y(y), z(z) {}
    v3() = default;
    
    constexpr f32 length();
    constexpr f32 dot(v3& vec);
    constexpr v3 cross(v3& vec);
    constexpr v3 normalize();
    constexpr v3 rotate();
    
    constexpr v3 operator+(const v3& s);
    constexpr v3 operator+(float s);
    constexpr v3 operator-(const v3& s);
    constexpr v3 operator-(float s);
    constexpr v3 operator*(const v3& s);
    constexpr v3 operator*(float s);
    constexpr v3 operator/(const v3& s);
    constexpr v3 operator/(float s);
    
    constexpr void operator+=(const v3& s);
	constexpr void operator+=(float s);
    constexpr void operator-=(const v3& s);
	constexpr void operator-=(float s);
    constexpr void operator*=(const v3& s);
	constexpr void operator*=(float s);
    constexpr void operator/=(const v3& s);
	constexpr void operator/=(float s);
    
    constexpr v3 operator-();
    
    float x, y, z;
};