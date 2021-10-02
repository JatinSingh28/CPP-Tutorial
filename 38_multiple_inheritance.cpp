#include <iostream>
using namespace std;

/*syntax for multiple inheritance
class derived : visibility - mode base1, visibility - mode base2
{
    class body
};*/
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "the value of base1 is " << base1int << endl;
        cout << "the value of base2 is " << base2int << endl;
        cout << "the value of base3 is " << base3int << endl;
        cout << "the sum of these value is " << base1int + base2int + base3int << endl;
    }
};

//base1 and base2int is protected in derived class as well in base class
//set_baseint is public in both base and derived class
int main()
{
    derived harry;
    harry.set_base1int(25);
    harry.set_base2int(10);
    harry.set_base3int(5);
    harry.show();
    return 0;
}