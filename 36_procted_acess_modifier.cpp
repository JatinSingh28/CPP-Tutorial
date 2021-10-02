#include <iostream>
using namespace std;

class base
{
private:
    int b;
protected:
    int a;
public:
    int c;
};

/*for a procted member
            public inheritance  private inheritance     procted inheritance
1 private   non inherited       not inherited           not inherited
2 procted   procted             private                 procted
3 public    public              private                 procted
*/

class derived : public base
{
};

int main()
{
    base b;
    derived d;
    //cout << b.a;
    //cout << d.a;
    cout << b.c;
    cout << d.c;
    return 0;
}