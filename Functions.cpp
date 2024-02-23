#include <iostream>
using namespace std;

// POWER FUNCTION  starts //
// int power(int a, int b)
// {

//     int ans = 1;

//     int i = 1;
//     while (i <= b)
//     {
//         ans = ans * a;
//         i++;
//     }

//     return ans;
// }

//  POWER FUNCTION END **** //

// CheckEvenOddNumber starts  //

// int evenOdd(int number)
// {
//     if (number % 2 == 0)
//     {
//         cout << "its even";
//     }
//     else
//     {
//         cout << "its not";
//     }
// }

// END  CheckEvenOddNumber **** //

// First I created Factorial function then created nCr function. I called factorial function with in the nCr function //
// Factorial Function //

// int Factorial(int number)
// {

//     int fact = 1;

//     for (int i = 1; i <= number; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// nCr function //

// int nCr(int number, int r)
// {

//     int num = Factorial(number);
//     int demo = Factorial(r) * Factorial(number - r);

//     int answer = num / demo;

//     return answer;
// }

// End nCr funvtion //

// Prime Number //

// bool isPrime(int num)
// {

//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// End isPrime number /

// Toal number of set bits//

int Totalbits(int num1, int num2)
{
    int count;
    int count1 = 0;
    int count2 = 0;

    while (num1 != 0)
    {
        if (num1 & 1)
        {
            count1++;
        }
        num1 = num1 >> 1;
    }

    while (num2 != 0)
    {
        if (num2 & 1)
        {
            count2++;
        }
        num2 = num2 >> 1;
    }

    return count = count1 + count2;
}

int main()
{
    // power function
    // int a, b;
    // cin >> a;
    // cin >> b;

    // int answer = power(a, b);
    // cout << answer;

    // //  POWER FUNCTION END //

    //  CheckEvenOddNumber //
    // int number;
    // cin >> number;

    // int answer = evenOdd(number);

    // END  CheckEvenOddNumber //

    // Factorial  and nCr //

    // int number;
    // cin >> number;
    // int r;
    // cin >> r;

    // int nCr(int number, int r);
    // cout << nCr(number, r);

    // End Factorial  and nCr //

    // Isprime numer //
    // int num;
    // cin >> num;

    // if (isPrime(num))
    // {
    //     cout << "it is a prime number: " << num << endl;
    // }
    // else
    // {
    //     cout << "it is not a prime number: " << num << endl;
    // }
    // END Isprime numer //

    // Toal number of set bits//

    int a, b;

    cin >> a >> b;
    int Totalbits(int a, int b);
    cout << Totalbits(a, b);
}