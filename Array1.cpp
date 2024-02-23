#include <iostream>
using namespace std;

// Array function "one"

// int printArrval(int arrval[], int size)
// {
//     cout << "value of array: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arrval[i] << " ";
//     }
// }

// Array for character

int printcharacter(char chararr[], int size)
{

    cout << "Charector value " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << chararr[i] << " ";
    }
}

int main()
{

    // Array declaration, initialization and print it through loop
    // int one[3] = {1, 2, 3};

    // int n = 2;
    // int i = 0;
    // while (i <= n)
    // {
    //     cout << one[i];
    //     i++;
    // }

    // How to initialize all index in the same value

    // int two[5];
    // int value = 1;

    // for (int i = 0; i < 5; i++)
    // {
    //     two[i] = value;

    //     cout << two[i];
    // }

    // function1  with Array

    // int arrval[5] = {5, 8, 9, 10, 20};
    int size = 5;
    // printArrval(arrval, size);

    // function2 with Array char
    char name[5] = {'a', 'b', 'd', 'u', 'l'};
    printcharacter(name, size);
}