#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point ( int x, int y) : X(x), Y(y) {};
        virtual ~Point();
    protected:
        int X, Y;
    private:
};

#endif // POINT_H
