#ifndef Vector2Df_H
#define Vector2Df_H

class Vector2Df{

public:
 //Attributes
	float x, y;

 //Methods	
	Vector2Df& setZero();
	bool isZero() const;
	Vector2Df& negate();

 //Operators
	Vector2Df& operator+ (const Vector2Df &a) const;
	Vector2Df& operator+= (const Vector2Df &a);
	Vector2Df& operator- (const Vector2Df &a) const;
	Vector2Df& operator-= (const Vector2Df &a);

 //Comparation
	bool operator==(const Vector2Df &a) const;
	bool operator!=(const Vector2Df &a) const;
 //Distance
    float distance (const Vector2Df &a) const;





/*
bool isZero() const //Metodo que comprueba que el punto sea igual a cero
{
	return (x == 0.0f && y == 0.0f);
}




*/


};


#endif