#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    static int count; //can be used by any object and functions

public:
    void setdata(void)
    {
        cout << "enter the id:" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "your employee id is: " << id << " and the employee number is " << count << endl;
    }

    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
        //cout<<id;//cannot print cuz static functions can only acess static variabale like count
    }
};

int employee ::count; //default value is zero

int main()
{
    employee harry, rohan, lovish;
    //harry.id =1;
    //harry.count=1;--->cannot do as id and count are private data

    harry.setdata();
    harry.getdata();
    employee ::getcount();

    rohan.setdata();
    rohan.getdata();
    employee ::getcount();

    lovish.setdata();
    lovish.getdata();
    employee ::getcount();
    return 0;
}