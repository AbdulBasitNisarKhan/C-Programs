#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // leetcode 1
    // n = 234
    // 2*3*4 = 24
    // 2+3+4 = 9

    // int n;
    // cin >> n;
    // int prod = 1;
    // int sum = 0;

    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     prod = prod * digit;
    //     sum = sum + digit;
    //     cout << digit << endl;

    //     n = n / 10;
    //     cout << n << endl;
    // }

    // int ans = prod - sum;
    // cout << ans;

    // leetcode 2
    // check how many 1 bits are there 000000000000011100000

    //     int n;
    //     cin >> n;

    //     int count = 0;

    //     while (n != 0)
    //     {
    //         if (n & 1)
    //         {
    //             count++;
    //         }
    //         n = n >> 1;
    //     }
    //     cout << count;

    // Leetcode problem 3 Reversed interger value

    // example 123 reverse 321
    // int n;
    // cout << "enter the number: " << endl;
    // cin >> n;
    // int digit;
    // int ans = 0;

    // while (n != 0)
    // {
    //     digit = n % 10; // 3 , 2 , 1
    //     if ((ans > INT32_MAX / 10) || (ans < INT32_MIN))
    //     {
    //         ans = 0;
    //         cout << 0;
    //         break;
    //     }

    //     ans = (ans * 10) + digit; // 3
    //     n = n / 10;               // 12 ,1
    // }
    // cout << ans;
    /*******************/

    // when you convert decimal to binary used 2 for remainder and divide for n

    // int n = 2;

    // int ans = 0;

    // while (n != 0)
    // {
    //     int bit = n % 2;
    //     ans = (ans * 10) + bit;
    //     n = n / 2;
    // }
    // cout << ans;

    // when you convert decimal to binary used 2 for remainder and divide for n

    //***           // when you convert decimal to binary used 2 for remainder and divide for n//
    // int n;
    // cin >> n;
    // int m = n;
    // int mask = 0;

    // while (m != 0)
    // {
    //     mask = (mask << 1) | 1;
    //     m = m >> 1;
    // }
    // int ans = (~n) & mask;
    // cout << ans;

    //*************//

    // power of two number //
    //     number jo input kia ha uss ko check karna ka woh 2 ki power me ata haa 4,16.32 like this

    // power of 2
    int n;
    cout << "enter the value " << endl;
    cin >> n;

    bool value = false;

    int i = 31;

    while (i != 0)
    {
        int power = pow(2, i);

        if (n == power)
        {
            cout << " its power of 2 value" << endl;
        }
        else
        {
            cout << " its not power of 2 value" << endl;
        }

        i--;
    }
}