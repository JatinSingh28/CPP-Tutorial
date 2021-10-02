#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //function objects(Functors): function wrapped in a class so that it available like an objects
    int arr[] = {1, 3, 77, 12, 4, 54, 16};
    //sort(arr, arr+5);//only sort first 5 element
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}