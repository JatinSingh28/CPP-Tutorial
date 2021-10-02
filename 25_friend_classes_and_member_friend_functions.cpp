#include <iostream>
using namespace std;

//forward declaration
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
    int sumimgcomplex(Complex, Complex);
};

class Complex
{
    int a, b;
    //individually declaring functions as friends
    //friend int calculator ::sumrealcomplex(Complex o1, Complex o2);
    //friend int calculator ::sumimgcomplex(Complex o1, Complex o2);

    //alternative--> declaring whole class as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumimgcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int imga = calc.sumimgcomplex(o1, o2);
    cout << "the sum of imaginery part of o1 and o2 is " << imga << endl;

    return 0;
}