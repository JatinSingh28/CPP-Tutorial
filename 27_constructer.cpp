#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //creating a constructor
    //constructer is a special member function with the same name of the class.
    //it is used to initalize the objects of its class
    //It is automatically invoked whenever a object is created
    complex(void); //constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)//default constructer
{
    a = 10;
    b = 20;
    //cout<<"Hello world"
}

int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/* 1. it should be declared in the public section of the class.
2. they are automaticallyinvoked whenever the object is created
3. they cannot return value and do not have return types
4.it can have default arguments
5. we cannot refer to the addressF
*/