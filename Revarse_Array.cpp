#include <iostream>
using namespace std;

void reversearray(int arr2[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr2[start], arr2[end]);
        start++;
        end--;
    }
}

void printArray(int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {6, 5, 4, 3, 2, 1};

    int size = 6;

    reversearray(arr2, size);
    printArray(arr2, size);
}
