/*#include <iostream>
#include <cmath>
using namespace std;

class simple
{
    int a, b, c;

public:
    void get_data()
    {
        cout << "enter your 1st number " << endl;
        cin >> a;
        cout << "enter your 2st number " << endl;
        cin >> b;
        cout << "enter the function that you want to perform:+,-,*,/" << endl;
        cin >> c;
    }
    if (c = +)
    {
        cout << "the sum is " << a + b << endl;
    }
    else if (c = -)
    {
        cout << "value after subtracting is " << a - b << endl;
    }
    else if (c = *)
    {
        cout << "the product is " << a * b << endl;
    }
    else if (c = /)
    {
        cout << "value after dividing is " << a / b << endl;
    }
    else{
        cout<<"wrong info"
    }



    /*void sum(int a, int b)
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
    }*/
//};
/*class scientific
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
*/
#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator {
    float a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};
class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}
