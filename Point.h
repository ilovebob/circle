#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
    public:
        Point(int X,int Y);
        ~Point();
        int getX();
        int getY();
        void move(int,int);
    protected:
    private:
        int X,Y;
};



#endif // POINT_H_INCLUDED
