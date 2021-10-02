#include <iostream>
using namespace std;
/* CLASS TEMPLATE WITH MULTIPLE PARAMETERS(ONE, TWO OR MORE THAN TWO)
template<class t1, class t2>(COMMA SEPERATED)
class name{
    //body
}
*/
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 <<"\t"<< this->data2;
    }
};

int main()
{
    myclass<int, float> obj(1, 2.99);
    obj.display();

    return 0;
}