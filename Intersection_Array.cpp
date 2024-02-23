#include <iostream>
#include <vector>
using namespace std;

int intersectin_Array(int arr1[], int arr2[], int size1, int size2, vector<int> ans, int pre_common)
{
    int i = 0;
    int j = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            if (arr1[i] != pre_common)
            {
                ans.push_back(arr1[i]);
                cout << "intersection in both arrays: " << arr1[i] << endl;
                pre_common = arr1[i];
            }

            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{

    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 4};

    vector<int> ans;
    int size1 = 6;
    int size2 = 4;
    // int i = 0;
    // int j = 0;
    int pre_common = -1;

    intersectin_Array(arr1, arr2, size1, size2, ans, pre_common);

    // while (i < size1 && j < size2)
    // {
    //     if (arr1[i] < arr2[j])
    //     {
    //         i++;
    //     }
    //     else if (arr1[i] == arr2[j])
    //     {
    //         if (arr1[i] != pre_common)
    //         {
    //             ans.push_back(arr1[i]);
    //             cout << "intersection in both arrays: " << arr1[i] << endl;
    //             pre_common = arr1[i];
    //         }

    //         i++;
    //         j++;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    // }
}