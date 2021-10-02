#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "aap kaise ho?" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};

class b
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};
class d:public b
{
public:
    void say()
    {
        cout << "Hii World" << endl;
    }
};
int main()
{
    //Ambiguity 1
    //base1 base1obj;
    //base2 base2obj;
    //base1obj.greet();
    //base2obj.greet();
    //derived d;
    //d.greet();

    //Ambiguity 2
    b bb;
    bb.say();
    d dd;
    dd.say();
    //if a same function is created in derived class then it will overwrite
    //the inherited function, if not created then it would take that only
    return 0;
}