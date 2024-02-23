#include <iostream>
using namespace std;

// function for getting max value

int getMaxNum(int arr1[], int size)
{
    int maxnum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr1[i] > maxnum)
        {
            maxnum = arr1[i];
        }
    }
    return maxnum;
}

// function for getting min value

int getMinval(int arr1[], int size)
{

    int minnum = INT16_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr1[i] < minnum)
        {
            minnum = arr1[i];
        }
    }

    return minnum;
}
int main()
{

    //  find the min max value of an array

    int arr1[10];
    int size;
    cout << "enter the size: " << endl;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << "maximum number: " << getMaxNum(arr1, size) << endl;

    cout << "partition " << endl;

    cout << "Minimum value " << getMinval(arr1, size);
}