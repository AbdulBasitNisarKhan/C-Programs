#include <iostream>
using namespace std;

int main()
{

    // int sum = 0;
    // int i = 1;
    // int n;
    // cin >> n;

    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // }

    // cout << sum << endl;

    // find sum of all even numbers

    // int i = 1;
    // int n;
    // cin >> n;

    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << " " << i;
    //     }
    //     i = i + 1;
    // }

    //*********************************

    // check its Prime number

    // int Prime;
    // cout << "enter number you want to check its Prime or Not:  " << endl;
    // cin >> Prime;

    // int i = 2;

    // while (i < Prime)
    // {
    //     if (Prime % i != 0)
    //     {
    //         cout << "Its prime number" << i << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "its not a prime number: " << endl;
    //         break;
    //     }
    //     i = i + 1;
    // }
    //********************************************

    // Pattern
    //  1 1 1
    //  2 2 2
    //  3 3 3

    // int n;
    // cout << "enter no of rows " << endl;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << " " << i;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //*************************//

    // pattern #02
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // int n;
    // cout << "enter the number" << endl;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << " " << j;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    // **************************

    // Pattern 3
    // 3 2 1
    // 3 2 1
    // 3 2 1

    // int n;
    // cout << "enter the number" << endl;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << (n - j) + 1 << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    //********************************

    // Patternt 4
    // 1 2 3
    // 4 5 6
    // 7 8 9

    // int n;
    // cout << "enter number" << endl;
    // cin >> n;
    // int count = 1;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {

    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    //     ******************************

    // Pattern 5

    // *
    // * *
    // * * *
    // * * * *

    // int n;
    // cout << "enter number" << endl;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*"
    //              << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    // **************************

    // pattern 6
    //  1
    //  2 3
    //  4 5 6
    //  7 8 9 10

    // int n;
    // cout << "enter number" << endl;
    // cin >> n;
    // int i = 1;
    // int count = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    //****************************

    // Pattern 7
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    // int n;
    // cout << "enter number" << endl;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     // int count = i;
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i + j - 1 << " ";
    //         //  count++;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // pattern 8
    //    1
    //    2 1
    //    3 2 1
    //    4 3 2 1

    // int n;
    // cout << "enter number";
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    //*********************************

    // Pattern 9
    //  A A A
    //  B B B
    //  C C C

    // int n;
    // cout << "enter the number";
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {

    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    //*******************
    // // Pattern 10

    // // A B C
    // // A B C
    // // A B c

    // cout << "enter the number";
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    //***********************

    // Pattern 11

    // A B C
    // D E F
    // G H I

    // cout << "enter the number";
    // int n;
    // cin >> n;
    // int i = 1;
    // char ch = 'A';

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {

    //         cout << ch << " ";
    //         j++;
    //         ch++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    //****************************

    // pattern 12
    // A B C
    // B C D
    // C D E

    // cout << "enter the number";
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = i + j - 1 + 'A' - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern 13
    //    A
    //    B B
    //    C C C

    // cout << "enter the number";
    // int n;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // **********************

    // pattern 14
    //    A
    //    B c
    //    D E F

    //     cout << "enter the number";
    //     int n;
    //     cin >> n;
    //     int i = 1;

    //     char ch = 'A';

    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= i)
    //         {
    //             cout << ch << " ";
    //             j++;
    //             ch++;
    //         }
    //         cout << endl;
    //         i++;
    //     }

    // pattern 15
    // A
    // B C
    // C D E
    // D E F G

    // cout << "enter the number";
    // int n;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = i + j - 1 + 'A' - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 16
    // D
    // C D
    // B C D
    // A B C D

    // int n;
    // cout << "enter the number";
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = n - i + 'A' + j - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // pattern 17
    //     *
    //    **
    //   ***
    //  ****

    // int n;
    // cout << "Enter the nummber ";
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // // Pattern 18
    // // ****
    // // ***
    // // **
    // // *

    // int n;
    // cout << "entet the number";
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 19
    // ****
    //  ***
    //   **
    //    *

    // int n;
    // cout << "Enter the number";
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int space = 1;
    //     while (space <= i)
    //     {
    //         cout << " ";
    //         space++;
    //     }

    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 20
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    // int n;
    // cout << "Enter the number";
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int space = 1;
    //     while (space <= i)
    //     {
    //         cout << " ";
    //         space++;
    //     }

    //     int j = 1;
    //     int count = 1;
    //     while (j <= n - i + 1)
    //     {
    //         int count = 1 + i - 1;
    //         cout << count;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 21
    //     1
    //    22
    //   333
    //  4444

    // int n;
    // cout << "Enter the number";
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n - i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     int k = 1;
    //     int count = 1;
    //     while (k <= i)
    //     {
    //         cout << count + i - 1;
    //         k++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // // Pattern 22
    // // 1234
    // //  234
    // //   34
    // //    4

    // int n;
    // cout << "Enter the number";
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     int k = i;     // 1234
    //     int count = 1; // 234
    //     while (k <= n)
    //     {
    //         cout << count + i - 1;
    //         count++;
    //         k++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // Pattern 23
    //     1
    //    23
    //   456
    //  78910

    // int n;
    // cout << "Enter the number";
    // cin >> n;
    // int count = 1;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = i;
    //     while (j <= n)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     int k = 1;

    //     while (k <= i)
    //     {
    //         cout << "" << count;
    //         count++;
    //         k++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    //      1
    //    1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1

    // int n;
    // cout << "Enter the number";
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = i;
    //     while (j <= n)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     int k = 1;
    //     while (k <= i)
    //     {
    //         cout << "" << k;
    //         k++;
    //     }
    //     int num = i - 1;
    //     while (num)
    //     {
    //         cout << "" << num;
    //         num = num - 1;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // Dabang Question
    //  1 2 3 4 5 5 4 3 2 1
    //  1 2 3 4 * * 4 3 2 1
    //  1 2 3 * * * * 3 2 1
    //  1 2 * * * * * * 2 1
    //  1 * * * * * * * * 1

    int n;
    cout << "enter the number";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // 1 2 3 4 5
        // 1 2 3 4
        // 1 2 3
        // 1 2
        // 1

        int j = 1;
        while (j <= n + 1 - i)
        {
            cout << "" << j;
            j++;
        }

        // Print stars *
        int num = i - 1;
        while (num)
        {
            cout << "*";
            num = num - 1;
        }

        int num1 = i - 1;
        while (num1)
        {
            cout << "*";
            num1 = num1 - 1;
        }

        // 5 4 3 2 1
        //   4 3 2 1
        //     3 2 1
        //       2 1
        //         1

        int k = n - i + 1;
        while (k >= 1)
        {
            cout << "" << k;
            k--;
        }

        i++;
        cout << endl;
    }
}
