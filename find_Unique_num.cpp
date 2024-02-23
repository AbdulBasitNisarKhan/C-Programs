#include <iostream>
using namespace std;

int UniqueNUm(int arr1[], int size, int ans)
{
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr1[i];
    }
    cout << "Unique Number is: " << ans << endl;
}

int main()
{

    int arr1[5] = {1, 2, 1, 2, 3};

    //  int n = 1;
    int size = 5;
    int ans = 0;

    UniqueNUm(arr1, size, ans);
    // int counting = 0;
    // int copyArrya[size];

    // copy element of one array
    // for (int i = 0; i < size; i++)
    // {
    //     copyArrya[i] = arr1[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr1[i] ^ copyArrya[i])
    //     {
    //         cout << "not found";
    //     }
    //     else
    //     {
    //         cout << "found" << arr1[i] << endl;
    //     }
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr1[i] ^ arr1[i + 1])
    //     {
    //         counting++;
    //     }
    // }
    // cout << "number is found:" << counting << " times" << endl;
}