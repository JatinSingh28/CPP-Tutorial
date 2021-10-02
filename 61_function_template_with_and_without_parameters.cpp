#include <iostream>
using namespace std;

template <class t1, class t2>
float funcavg(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = funcavg(4, 6);
    printf("The avg of these numbers is %.2f", a); //you can also use cout
    cout << endl;

    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl
         << y;

    return 0;
}