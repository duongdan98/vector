#include "ToaDo.h"
istream& operator>> (istream& i, ToaDo& td)
{
	cout << "nhap vao toa do x,y\n";
	i >> td.x >> td.y;
	return i;
}
ostream& operator <<(ostream& o, ToaDo td)
{
	o << "(" << td.x << "," << td.y << ")";
	return o;
}
void ToaDo::setX(int x)
{
	this->x = x;
}
int ToaDo::getX()
{
	return x;
}
void ToaDo::setY(int y)
{
	this->y = y;
}
int ToaDo::getY()
{
	return y;
}