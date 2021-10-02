#include <iostream>
using namespace std;

class c2;
class c1
{
    int val1;
    friend void exchange(c1 & x, c2 & y);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void dislplay(void)
    {
        cout << val1 << endl;
    }
    
};

class c2
{
    int val2;
    friend void exchange(c1 & x, c2 & y);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void dislplay(void)
    {
        cout << val2 << endl;
    }
    
};

void exchange(c1 & x, c2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.indata(34);
    o2.indata(67);
    exchange(o1, o2);
    cout<<"the value of val1 after exchanging becomes :";
    o1.dislplay();
    cout<<"the value of val2 after exchanging becomes :";
    o2.dislplay();

    return 0;
}