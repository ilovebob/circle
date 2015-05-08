#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include"Point.h"

class Circle: public Point
{
    public:
        Circle(int X, int Y,int r);
        ~Circle();
        void move(int,int);
        Point& getCenter(){
            return *this;
        };
    protected:
    private:
        int radius;
};


#endif // CIRCLE_H_INCLUDED
