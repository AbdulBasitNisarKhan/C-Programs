#include <iostream>
using namespace std;

int searchInRotatedArray(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // If target is found at mid
        if (arr[mid] == target)
            return mid;

        // If arr[left...mid] is sorted
        if (arr[left] <= arr[mid])
        {
            // If target is in arr[left...mid]
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // If arr[mid...right] is sorted
        else
        {
            // If target is in arr[mid...right]
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    // If target is not found
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int index = searchInRotatedArray(arr, size, target);

    if (index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element " << target << " not found in the array." << endl;

    return 0;
}
