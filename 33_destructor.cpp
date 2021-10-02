#include <iostream>
using namespace std;

//destructor never takes a argument nor does it return a vlue
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when a constructor is called for object number" << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside main function" << endl;
    cout << "creating first object" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "cout exiting this block" << endl;
    }
    cout << "back to main" << endl;

    return 0;
}