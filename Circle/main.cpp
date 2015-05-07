#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

int main()
{
    Point center ( 10, 20 );

    Circle circle ( center, 10 );
    circle.move ( 10, 20 );

    cout << circle.putx () << ' ' << circle.puty () << endl;
    return 0;
}
