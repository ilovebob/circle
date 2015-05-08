#include"Circle.h"

Circle::Circle(int X, int Y,int r):Point(X,Y),radius(r)
{
}

Circle::~Circle()
{
}

void Circle::move(int x,int y)
{
    Point::move(x,y);
}
