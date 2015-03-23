
#include <math.h>
#include "Vector2Df.h"

//Methods
Vector2Df& Vector2Df::setZero()
{
	 x = y = 0.0f;
	 return (*this);
}

bool Vector2Df::isZero() const
{
	return (x == 0.0f && y == 0.0f);
}

Vector2Df& Vector2Df::negate()
{
	x = -x;
	y = -y;
	return (*this);
}

//Operators 
Vector2Df& Vector2Df::operator+ (const Vector2Df &a) const
 
{
	Vector2Df tmp;

	tmp.x = x + a.x;
	tmp.y = y + a.y;

	return tmp;
}

Vector2Df& Vector2Df::operator+= (const Vector2Df &a)
{
	x += a.x;
	y += a.y;
	
	return (*this);
}

Vector2Df& Vector2Df::operator- (const Vector2Df &a) const
{
	Vector2Df tmp;

	tmp.x = x - a.x;
	tmp.y = y - a.y;

	return tmp;
}

Vector2Df& Vector2Df::operator-= (const Vector2Df &a)
{
	x -= a.x;
	y -= a.y;

	return (*this);
}

//Comparation
bool Vector2Df::operator== (const Vector2Df &a) const
{
	return (x == a.x && y == a.y);
}

bool Vector2Df::operator!= (const Vector2Df &a) const
{
	return (x != a.x || y != a.y);
}

//Distance
float Vector2Df::distance(const Vector2Df &a) const
{
	float dx = a.x - x;
	float dy = a.y - y;
	return sqrtf(abs(dx*dx) + abs(dy*dy));

};