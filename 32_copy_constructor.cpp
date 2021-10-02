#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }//when no copy constructor is found compiler supplies its own constructor*/
    void display()
    {
        cout << "the number is " << a << endl;
    }
};

int main()
{
    number x, y, z(43),z2;
    number n(5);
    n.display();
    z.display();
    x.display();

    number z1(x);//copy constructor invoked
    z1.display();
    //z1 will become equal to x

    z2 = z1;//copy constructor not ivoked cuz obj is already created
    //object should be created in that line to invoke copy conatructor
    z2.display();

    number z3 = z;
    z3.display();
    return 0;
}