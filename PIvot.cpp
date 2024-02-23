#include <iostream>
using namespace std;

int findPivot(int arr1[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr1[mid] > arr1[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main()
{

    int arr1[5] = {3, 8, 10, 17, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    cout << findPivot(arr1, size);
}