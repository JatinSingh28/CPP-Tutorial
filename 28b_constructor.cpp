#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void diplaypoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    void distance(point o1, point o2){
        cout<<"the distance btw the points is "<<(((o2.y-o1.y)^2)+((o2.x-o1.x)^2)^1/2);
    }
};

int
main()
{
    point p(0,0);
    point q(0,50);
    //p.diplaypoint();
    //q.diplaypoint();
    point d (0,0);
    d.distance(p,q);
    return 0;
}