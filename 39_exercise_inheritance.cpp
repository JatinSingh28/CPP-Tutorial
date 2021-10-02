#include <iostream>
using namespace std;

class simple
{
protected:
    int a, b;

public:
    void sum(int a, int b)
    {
        cout << "the sum is " << a + b << endl;
    }
    void minus(int a, int b)
    {
        cout << "value after subtraction is " << a - b << endl;
    }
    void multiply(int a, int b)
    {
        cout << "the product is " << a * b << endl;
    }
    void divide(int a, int b)
    {
        cout << "value after division is " << a / b << endl;
    }
};
class scientific
{
public:
    void avg(int a, int b)
    {
        cout << "the avg is " << (a + b) / 2 << endl;
    }
    void hypotnuse(int a, int b)
    {
        cout << "length of hypotnuse is " << (a ^ 2 + b ^ 2);
    }
};
class calculator : public simple, public scientific
{
};
int main()
{
    calculator a;
    a.sum(5, 6);
    a.avg(100, 50);

    return 0;
}