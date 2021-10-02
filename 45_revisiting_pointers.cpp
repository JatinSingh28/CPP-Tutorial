#include <iostream>
using namespace std;

int main()
{
    //basic example
    int a = 4;
    int *ptr = &a; //ptr is container that contain address of a
    //*ptr = 999;//changes value of a to 999F

    cout << "the value of a is " << *(ptr) << endl;
    cout << ptr << endl;
    //*ptr means extracting the value of a from its address ptr

    //new operator
    float *p = new float(40);
    cout << "the value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    //arr[1] = 20;
    *(arr + 1) = 20;
    arr[2] = 30;
    //delete[] arr;//this is used to a dynamically allocated free block of allocated value or dynamically located int or float
    cout << "the value of arr[0] is " << arr[0] << endl;
    cout << "the value of arr[1] is " << arr[1] << endl;
    cout << "the value of arr[2] is " << arr[2] << endl;

    //delete operator

    return 0;
}