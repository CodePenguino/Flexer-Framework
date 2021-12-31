#include "v3.h"
#include <math.h>
#include <iostream>

constexpr f32 v3::length()
{
	return sqrtf(x*x + y*y + z*z);
}

constexpr f32 v3::dot(v3& vec)
{
	return x * vec.x + y * vec.y + z * vec.z;
}

constexpr v3 v3::cross(v3& vec)
{
	return v3(y * vec.z - z * vec.y,
			  z * vec.x - x * vec.z,
			  x * vec.y - y * vec.x);
}

constexpr v3 v3::normalize()
{
	float length = v3::length();
	
	x /= length;
	y /= length;
	z /= length;
	
	return *this;
}

constexpr v3 v3::rotate()
{
	return v3();
}



constexpr v3 v3::operator+(const v3& s)
{
	return v3(x + s.x, y + s.y, z + s.z);
}

constexpr v3 v3::operator+(float s)
{
	return v3(x + s, y + s, z + s);
}

constexpr v3 v3::operator-(const v3& s)
{
	return v3(x - s.x, y - s.y, z - s.z);
}

constexpr v3 v3::operator-(float s)
{
	return v3(x - s, y - s, z - s);
}

constexpr v3 v3::operator*(const v3& s)
{
	return v3(x * s.x, y * s.y, z * s.z);
}

constexpr v3 v3::operator*(float s)
{
	return v3(x * s, y * s, z * s);
}

constexpr v3 v3::operator/(const v3& s)
{
	return v3(x / s.x, y / s.y, z / s.z);
}

constexpr v3 v3::operator/(float s)
{
	return v3(x / s, y / s, z / s);
}



constexpr void v3::operator+=(const v3& s)
{
	x += s.x; y += s.y; z += s.z;
}

constexpr void v3::operator+=(float s)
{
	x += s; y += s; z += s;
}

constexpr void v3::operator-=(const v3& s)
{
	x -= s.x; y -= s.y; z -= s.z;
}

constexpr void v3::operator-=(float s)
{
	x -= s; y -= s; z -= s;
}

constexpr void v3::operator*=(const v3& s)
{
	x *= s.x; y *= s.y; z *= s.z;
}

constexpr void v3::operator*=(float s)
{
	x *= s; y *= s; z *= s;
}

constexpr void v3::operator/=(const v3& s)
{
	x /= s.x; y /= s.y; z /= s.z;
}

constexpr void v3::operator/=(float s)
{
	x /= s; y /= s; z /= s;
}

constexpr v3 v3::operator-()
{
	return v3(-x, -y, -z);
}