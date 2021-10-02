#include <iostream>
using namespace std;

class shopitem
{
    int id;
    float price;

public:
    void set_data(int a, int b)
    {
        id = a;
        price = b;
    }
    void get_data()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    //int *ptr = &size;//store address of size
    //int *ptr = new int [34];//allocate memory of 34 blocks

    shopitem *ptr = new shopitem[size]; //provide memory which can store 3 objects of class shop
    shopitem *ptrtemp = ptr;
    int p, i;
    float q;

    for (int i = 0; i < size; i++)
    {
        cout << "id and price of item is " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).set_data(p,q)
        ptr->set_data(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "item number: " << i + 1 << endl;
        ptrtemp->get_data();
        ptrtemp++;
    }

    return 0;
}