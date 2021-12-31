#pragma once

#include "../common/util.h"
#include <math.h>

class v4
{
    public:
    
	constexpr v4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {};
    v4() = default;
    
	constexpr f32 length()
    {
        return sqrtf(x * x + y * y + z * z + w * w);
    }
    
    constexpr f32 dot(const v4& vec)
    {
        return x * vec.x + y * vec.y + z * vec.z + w * vec.w;
    }
    
	constexpr v4 normalize()
    {
        f32 length = v4::length();
        
        x /= length;
        y /= length;
        z /= length;
        w /= length;
        
        return *this;
    }
    
	constexpr v4 operator+(const v4& s)
    {
        return v4(x + s.x, y + s.y, z + s.z, w + s.w);
    }
    
	constexpr v4 operator+(float s)
    {
        return v4(x + s, y + s, z + s, w + s);
    }
    
    constexpr v4 operator-(const v4& s)
    {
        return v4(x - s.x, y - s.y, z - s.z, w - s.w);
    }
	
    constexpr v4 operator-(float s)
    {
        return v4(x - s, y - s, z - s, w - s);
    }
    
    constexpr v4 operator*(const v4& s)
    {
        return v4(x * s.x, y * s.y, z * s.z, w * s.w);
    }
    
	constexpr v4 operator*(float s)
    {
        return v4(x * s, y * s, z * s, w * s);
    }
    
    constexpr v4 operator/(const v4& s)
    {
        return v4(x / s.x, y / s.y, z / s.z, w / s.w);
    }
    
    constexpr v4 operator/(float s)
    {
        return v4(x / s, y / s, z / s, w / s);
    }
    
    // -----------------------------------------
    
	constexpr void operator+=(const v4& s)
    {
        x += s.x; y += s.y; z += s.z; w += s.w;
    }
    
	constexpr void operator+=(float s)
    {
        x += s; y += s; z += s; w += s;
    }
    
    constexpr void operator-=(const v4& s)
    {
        x -= s.x; y -= s.y; z -= s.z; w -= s.w;
    }
    
	constexpr void operator-=(float s)
    {
        x -= s; y -= s; z -= s; w -= s;
    }
    
    constexpr void operator*=(const v4& s)
    {
        x *= s.x; y *= s.y; z *= s.z; w *= s.w;
    }
    
	constexpr void operator*=(float s)
    {
        x *= s; y *= s; z *= s; w *= s;
    }
    
    constexpr void operator/=(const v4& s)
    {
        x /= s.x; y /= s.y; z /= s.z; w /= s.w;
    }
    
	constexpr void operator/=(float s)
    {
        x /= s; y /= s; z /= s; w /= s;
    }
    
    constexpr void operator=(const v4& s)
    {
        x = s.x; y = s.y; z = s.z; w = s.w;
    }
    
    constexpr void operator=(float s)
    {
        x = s; y = s; z = s; w = s;
    }
    constexpr v4 operator-()
    {
        return v4(-x, -y, -z, -w);
    }
    
    /*constexpr v4 operator*(const m4& f)
    {
        v4 res = v4(f.data[0][0] * x + f.data[1][0] * y + f.data[2][0] * z + f.data[3][0] * w,
                    f.data[0][1] * x + f.data[1][1] * y + f.data[2][1] * z + f.data[3][1] * w,
                    f.data[0][2] * x + f.data[1][2] * y + f.data[2][2] * z + f.data[3][2] * w,
                    f.data[0][3] * x + f.data[1][3] * y + f.data[2][3] * z + f.data[3][3] * w);
        
        return res;
    }*/
    
    float x, y, z, w;
};

#include "m4.h"

constexpr v4 v4_mul_m4(const v4& second, const m4& first)
{
    v4 res = v4(first.data[0][0] * second.x + first.data[1][0] * second.y + first.data[2][0] * second.z + first.data[3][0] * second.w,
                first.data[0][1] * second.x + first.data[1][1] * second.y + first.data[2][1] * second.z + first.data[3][1] * second.w,
                first.data[0][2] * second.x + first.data[1][2] * second.y + first.data[2][2] * second.z + first.data[3][2] * second.w,
                first.data[0][3] * second.x + first.data[1][3] * second.y + first.data[2][3] * second.z + first.data[3][3] * second.w);
	
	res.x = first.data[0][0] * second.x + first.data[1][0] * second.y + first.data[2][0] * second.z + first.data[3][0] * second.w;
	res.y = first.data[0][1] * second.x + first.data[1][1] * second.y + first.data[2][1] * second.z + first.data[3][1] * second.w;
	res.z = first.data[0][2] * second.x + first.data[1][2] * second.y + first.data[2][2] * second.z + first.data[3][2] * second.w;
	res.w = first.data[0][3] * second.x + first.data[1][3] * second.y + first.data[2][3] * second.z + first.data[3][3] * second.w;
    
	return res;
}