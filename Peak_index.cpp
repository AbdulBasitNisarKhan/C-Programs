#include <iostream>
using namespace std;

void peanIndex(int arr1[], int size)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr1[mid] < arr1[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    cout << arr1[start];
}

int main()
{

    int arr1[3] = {
        1,
        3,
        2,
    };
    int size = 3;

    peanIndex(arr1, size);

    // int start = 0;
    // int end = size - 1;

    // int mid = (start + end) / 2;

    // while (start < end)
    // {
    //     if (arr1[mid] < arr1[mid + 1])
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid;
    //     }
    //     mid = (start + end) / 2;
    // }
    // cout << arr1[start] << " " << endl;
}