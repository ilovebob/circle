#include"Point.h"

Point::Point(int X,int Y):X(X),Y(Y)
{
}

Point::~Point()
{
}

int Point::getX()
{
    return X;
}

int Point::getY()
{
    return Y;
}

void Point::move(int x,int y)
{
    X+=x;
    Y+=y;
}
