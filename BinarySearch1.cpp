#include <iostream>
using namespace std;

int BinarySearch1(int arr1[], int size)
{
    int key = 20;

    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr1[mid] == key)
        {
            return mid;
        }
        if (key > arr1[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr1[6] = {3, 7, 11, 13, 19, 27};
    int size = 6;
    int index = BinarySearch1(arr1, size);
    cout << index << " ";

    // int key = 27;

    // int start = 0;
    // int end = size - 1;

    // int mid = (start + end) / 2;

    // while (start <= end)
    // {
    //     if (arr1[mid] == key)
    //     {
    //         cout << mid << " ";
    //     }
    //     if (key > arr1[mid])
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid - 1;
    //     }
    //     mid = (start + end) / 2;
    // }
    // cout << " not number exists: ";
}