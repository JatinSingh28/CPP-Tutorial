#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[200];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void displayprice(void);
    void setprice(void);
};

void shop ::setprice(void)
{
    cout << "enter your item id " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter your item price" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item with item id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}