#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 3, 3, 3};
    int size = 5;
    int total_occurence = 0;
    pair<int, int> answer1 = make_pair(-1, -1); // Initialize with invalid values

    int start = 0;
    int end = size - 1;
    int key = 3;

    int mid = (start + end) / 2;

    // Find the leftmost occurrence
    while (start <= end)
    {
        if (arr1[mid] == key)
        {
            answer1.first = mid;
            end = mid - 1;
        }
        else if (key > arr1[mid])
        {
            start = mid + 1;
        }
        else if (key < arr1[mid])
        {
            end = end - 1;
        }
        mid = (start + end) / 2;
    }

    // Reset start and end for finding rightmost occurrence
    start = 0;
    end = size - 1;
    mid = (start + end) / 2;

    // Find the rightmost occurrence
    while (start <= end)
    {
        if (arr1[mid] == key)
        {
            answer1.second = mid;
            start = mid + 1;
        }
        else if (key > arr1[mid])
        {
            start = mid + 1;
        }
        else if (key < arr1[mid])
        {
            end = end - 1;
        }
        mid = (start + end) / 2;
    }

    // Print the leftmost and rightmost occurrences
    if (answer1.first != -1 && answer1.second != -1)
    {
        cout << "Leftmost occurrence: " << answer1.first << endl;
        cout << "Rightmost occurrence: " << answer1.second << endl;
        total_occurence = answer1.second - answer1.first + 1;
        cout << "Total nuber of  occurrence: " << total_occurence << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    return 0;
}
