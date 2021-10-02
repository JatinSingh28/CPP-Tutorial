#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); //constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) //paremeterized constructer it takes two parameteres 
{
    a = x;
    b = y;
    //cout<<"Hello world"
}

int main()
{
    //implicit call
    complex a(4, 6);

    //explicit call
    complex b = complex(5, 7);

    a.printNumber();
    b.printNumber();

    return 0;
}