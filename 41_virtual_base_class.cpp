//class A -->B==>D
//        -->C==>D
// A is virtual base class
//it helps withs duplicacy and ambigousy
//syntax
//class B: virtual public A

#include <iostream>
using namespace std;
/*Inheritance
student--> test
student--> sports
tests-->result
sports-->result
*/
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is here:- " << endl
             << "maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "your pt score is " << score << endl;
    }
};
class result : public test, public sports
{
protected:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is " << total << endl;
    }
};

int main()
{
    result harry;
    harry.set_number(321654);
    harry.set_marks(78.9, 91.94);
    harry.set_score(89);
    harry.display();
    return 0;
}
