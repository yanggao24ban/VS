#include "Vec2.h"

Vec2 Vec2::operator+=(const Vec2 & b)
{
	this->x += b.x;
	this->y += b.y;
	return {x,y};
}

Vec2 Vec2::operator-=(const Vec2 & b)
{
	this->x -= b.x;
	this->y -= b.y;
	return { x,y };
}

void Vec2::clamp(const Vec2 & min, const Vec2 & max)
{
	x = x > max.x ? max.x : x;
	x = x < min.x ? min.x : x;
	y = y > max.y ? max.y : y;
	y = y < min.y ? min.y : y;
}

Vec2 operator+(const Vec2 & a, const Vec2 & b)
{
	return { a.x + b.x,a.y + b.y };
}

Vec2 operator-(const Vec2 & a, const Vec2 & b)
{
	return { a.x - b.x,a.y - b.y };
}

Vec2 operator*(const Vec2 & a, float b)
{
	return { int(a.x*b),int(a.y*b) };
}
