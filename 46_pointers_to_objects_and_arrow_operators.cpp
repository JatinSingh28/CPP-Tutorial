#include <iostream>
using namespace std;

class complex
{
    int real, imaginery;

public:
    void get_data()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginery part is " << imaginery << endl;
    }
    void set_data(int a, int b)
    {
        real = a;
        imaginery = b;
    }
};

int main()
{
    //complex c1;
    //complex *ptr = &c1;
    complex *ptr = new complex;

    //c1.set_data(2,54);//(*ptr).set_data(2,54)
    //c1.get_data();//(*ptr).get_data()

    //arrow operater
    ptr->set_data(2, 54);
    ptr->get_data();

    //array of objects
    complex *ptr1 = new complex[4];
    ptr1->set_data(1, 4);
    ptr1->get_data();

    return 0;
}