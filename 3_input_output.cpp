#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "enter value of num1:"; /*<<this is called insertion operator*/
    cin >> num1;                    /*>>this is a extraction operator*/

    cout << "enter value of num2:"; /*<<this is called insertion operator*/
    cin >> num2;                    /*>>this is a extraction operator*/

    cout << "the sum is " << num1 + num2;

    return 0;
}