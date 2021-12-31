#pragma once

#include <math.h>

class v4;

class m4
{
    public:
    constexpr m4()
    {
        // Basic init
        data[0][0] = 1; data[0][1] = 0; data[0][2] = 0; data[0][3] = 0;
        data[1][0] = 0; data[1][1] = 1; data[1][2] = 0; data[1][3] = 0;
        data[2][0] = 0; data[2][1] = 0; data[2][2] = 1; data[2][3] = 0;
        data[3][0] = 0; data[3][1] = 0; data[3][2] = 0; data[3][3] = 1;
    }
    
    constexpr m4 initIdentity()
    {
        data[0][0] = 1; data[0][1] = 0; data[0][2] = 0; data[0][3] = 0;
        data[1][0] = 0; data[1][1] = 1; data[1][2] = 0; data[1][3] = 0;
        data[2][0] = 0; data[2][1] = 0; data[2][2] = 1; data[2][3] = 0;
        data[3][0] = 0; data[3][1] = 0; data[3][2] = 0; data[3][3] = 1;
        
        return *this;
    }
    
    constexpr void operator=(const m4& s)
    {
        for(u8 y = 0; y < 4; y++)
        {
            for(u8 x = 0; x < 4; x++)
            {
                data[y][x] = s.data[y][x];
            }
        }
    }
    
    constexpr m4 operator*(const m4& s)
    {
        m4 m;
        
        for(u8 y = 0; y < 4; y++)
        {
            for(u8 x = 0; x < 4; x++)
            {
                m.data[y][x] = data[y][0] * s.data[0][x] +
                    data[y][1] * s.data[1][x] +
                    data[y][2] * s.data[2][x] +
                    data[y][3] * s.data[3][x];
            }
        }
        
        return m;
    }
    
    /*constexpr m4 operator*(float s)
    {
        m4 m;
        
        for(u8 y = 0; y < 4; y++)
        {
            for(u8 x = 0; x < 4; x++)
            {
                m.data[y][x] = data[y][0] * s +
                    data[y][1] * s +
                    data[y][2] * s +
                    data[y][3] * s;
            }
        }
        
        return m;
    }*/
    
    float data[4][4] = {0};
};

constexpr m4 m4_translate(float x, float y, float z)
{
    m4 m;
    
	m.data[0][0] = 1;	m.data[0][1] = 0;	m.data[0][2] = 0;	m.data[0][3] = x;
	m.data[1][0] = 0;	m.data[1][1] = 1;	m.data[1][2] = 0;	m.data[1][3] = y;
	m.data[2][0] = 0;	m.data[2][1] = 0;	m.data[2][2] = 1;	m.data[2][3] = z;
	m.data[3][0] = 0;	m.data[3][1] = 0;	m.data[3][2] = 0;	m.data[3][3] = 1;
    
	return m;
}

constexpr m4 m4_rotate2d(float rot)
{
    m4 m;
    
	rot = degrees_to_radians(rot);
    
	m.data[0][0] = cosf(rot);		m.data[0][1] = -sinf(rot);		m.data[0][2] = 0;		m.data[0][3] = 0;
	m.data[1][0] = sinf(rot);		m.data[1][1] = cosf(rot);		m.data[1][2] = 0;		m.data[1][3] = 0;
	m.data[2][0] = 0;				m.data[2][1] = 0;				m.data[2][2] = 1;		m.data[2][3] = 0;
	m.data[3][0] = 0;				m.data[3][1] = 0;				m.data[3][2] = 0;		m.data[3][3] = 1;
    
	return m;
}

constexpr m4 m4_scale(float x, float y, float z)
{
    m4 m;
    
	m.data[0][0] = x;	m.data[0][1] = 0;	m.data[0][2] = 0;	m.data[0][3] = 0;
	m.data[1][0] = 0;	m.data[1][1] = y;	m.data[1][2] = 0;	m.data[1][3] = 0;
	m.data[2][0] = 0;	m.data[2][1] = 0;	m.data[2][2] = z;	m.data[2][3] = 0;
	m.data[3][0] = 0;	m.data[3][1] = 0;	m.data[3][2] = 0;	m.data[3][3] = 1;
    
	return m;
}

constexpr m4 m4_ortho(float l, float r, float b, float t, float n, float f)
{
    m4 m;
    
	m.data[0][0] = 2 / (r - l);        m.data[0][1] = 0;                  m.data[0][2] = 0;                  m.data[0][3] = 0;
	m.data[1][0] = 0;                  m.data[1][1] = 2 / (t - b);        m.data[1][2] = 0;                  m.data[1][3] = 0;
	m.data[2][0] = 0;                  m.data[2][1] = 0;                  m.data[2][2] = -2 / (f - n);       m.data[2][3] = 0;
	m.data[3][0] = -(r + l) / (r - l); m.data[3][1] = -(t + b) / (t - b); m.data[3][2] = -(f + n) / (f - n); m.data[3][3] = 1;
    
	return m;
}

constexpr m4 m4_inverse(m4 mat)
{
    float t[6] = {0};
    float a = mat.data[0][0], b = mat.data[0][1], c = mat.data[0][2], d = mat.data[0][3],
    e = mat.data[1][0], f = mat.data[1][1], g = mat.data[1][2], h =mat. data[1][3],
    i = mat.data[2][0], j = mat.data[2][1], k = mat.data[2][2], l = mat.data[2][3],
    m = mat.data[3][0], n = mat.data[3][1], o = mat.data[3][2], p = mat.data[3][3];
    
    t[0] = k * p - o * l; t[1] = j * p - n * l; t[2] = j * o - n * k;
    t[3] = i * p - m * l; t[4] = i * o - m * k; t[5] = i * n - m * j;
    
    mat.data[0][0] =  f * t[0] - g * t[1] + h * t[2];
    mat.data[1][0] =-(e * t[0] - g * t[3] + h * t[4]);
    mat.data[2][0] =  e * t[1] - f * t[3] + h * t[5];
    mat.data[3][0] =-(e * t[2] - f * t[4] + g * t[5]);
    
    mat.data[0][1] =-(b * t[0] - c * t[1] + d * t[2]);
    mat.data[1][1] =  a * t[0] - c * t[3] + d * t[4];
    mat.data[2][1] =-(a * t[1] - b * t[3] + d * t[5]);
    mat.data[3][1] =  a * t[2] - b * t[4] + c * t[5];
    
    t[0] = g * p - o * h; t[1] = f * p - n * h; t[2] = f * o - n * g;
    t[3] = e * p - m * h; t[4] = e * o - m * g; t[5] = e * n - m * f;
    
    mat.data[0][2] =  b * t[0] - c * t[1] + d * t[2];
    mat.data[1][2] =-(a * t[0] - c * t[3] + d * t[4]);
    mat.data[2][2] =  a * t[1] - b * t[3] + d * t[5];
    mat.data[3][2] =-(a * t[2] - b * t[4] + c * t[5]);
    
    t[0] = g * l - k * h; t[1] = f * l - j * h; t[2] = f * k - j * g;
    t[3] = e * l - i * h; t[4] = e * k - i * g; t[5] = e * j - i * f;
    
    mat.data[0][3] =-(b * t[0] - c * t[1] + d * t[2]);
    mat.data[1][3] =  a * t[0] - c * t[3] + d * t[4];
    mat.data[2][3] =-(a * t[1] - b * t[3] + d * t[5]);
    mat.data[3][3] =  a * t[2] - b * t[4] + c * t[5];
    
    float det = 1.0f / (a * mat.data[0][0] + b * mat.data[1][0]
                        + c * mat.data[2][0] + d * mat.data[3][0]);
    
    return mat;
}