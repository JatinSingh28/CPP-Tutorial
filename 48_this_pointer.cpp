#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A& set_data(int a)
    {
        this->a = a;
        return *this;
    }
    void get_data()
    {
        cout << "the value of a is " << a << endl;
    }
};

int main()
{ //this is a keyword which is a pointer which points to the object which
    //invokes the member function
    A a;
    a.set_data(5).get_data();
    a.get_data();

    return 0;
}