#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle : public Point
{
    public:
        Circle ( Point center, int r) : Point ( center ), R (r) {};
        virtual ~Circle();

        void move ( int , int );
        int putx ()
        {
            return X;
        }
        int puty ()
        {
            return Y;
        }

    protected:
    private:
        int R;
};

#endif // CIRCLE_H
