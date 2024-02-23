#include <iostream>
using namespace std;

int sumofArray(int arr1[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
        sum = sum + arr1[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << " enter the value " << endl;
    cin >> size;

    int arr1[5];

    cout << "Sum_of_Array: " << sumofArray(arr1, size) << endl;
}