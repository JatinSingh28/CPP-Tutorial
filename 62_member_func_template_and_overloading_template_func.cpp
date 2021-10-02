#include <iostream>
using namespace std;

template <class t>
class harry
{
public:
    t data;
    harry(t a)
    {
        data = a;
    }
    void display();
};
template <class t>
void harry<t>::display()
{
    cout << data;
}
void func(int a)
{
    cout << "I am first func() " << a << endl;
}
template<class t>
void func(t a)
{
    cout << "I am templatised func() " << a << endl;
}
template<class t>
void func1(t a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    //harry<float> h(5.5);
    //harry<char>h('c');
    //harry<int>h(87);
    //cout << h.data<<endl;
    //h.display();

    func(4); //exact macth has highest priority
    func1(4);
    return 0;
}