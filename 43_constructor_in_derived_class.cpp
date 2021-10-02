#include <iostream>
using namespace std;
/*
case1:
class B: public A{ 
    //order of execution of constructor --> first A() then B()
    //cuz constructor of base class executes before derived class
};
case2:
class A: public B, public c{
    //order of execution --> B() then C() then A()
    B and C both are base class and B is written before C
}
case3:
class A: public B, virtual public C{
    //order of execution of constructor -> C() then B() then A()
}
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void print_data_base1(void)
    {
        cout << "the value of data is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void print_data_base2(void)
    {
        cout << "the value of data is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called" << endl;
    }
    void print_data_derived(void)
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived harry(1, 2, 3, 4);
    harry.print_data_base1();
    harry.print_data_base2();
    harry.print_data_derived();

    return 0;
}