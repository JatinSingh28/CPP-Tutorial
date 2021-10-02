/*
inheritance==> increases reuseibility of code

...types of inheritance
single inheritance==> one child one parent
multiple inheritance==> two parent one child
hierarchial inheritance==> one parent two child
multilevel inheritance==> animal--> mamals-->cows
hybrid inheritance==> animal[-->mamals-->bat
                             -->birds--^    ]
*/
#include <iostream>
using namespace std;

//base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee(){};
};

//drived class-->syntax
/*class {{derived-class name}} : {{visibility mode}} {{base- class name}}
{
    class members/ methods/ etc...
}*/
/* note: 1.. default visibility mode is private
2..public visibility mode: public members of the base class becomes public members of derived class
3..private visibility mode: public members of derived class becomes private members of derived class
4..private numbers cannot be inherited
*/

class programer : public employee
{
public:
    int languagecode;
    programer(int inpid)
    {
        id = inpid;
        languagecode = 9;
    }

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programer skillf(10);
    cout << skillf.languagecode << endl;
    skillf.getdata();
    cout << skillf.id << endl;
    cout << skillf.salary << endl;
    return 0;
}