#include <iostream>
using namespace std;

bool linearSearch(int linear_Search[], int size, int numFind)
{

    for (int i = 0; i < size; i++)
    {
        cin >> linear_Search[i];
        if (numFind == linear_Search[i])
        {
            return 1;
        }

        return 0;
    }
}

int main()
{
    int size;
    cout << "enter the size: " << endl;
    cin >> size;
    int linear_Search[10];

    int numFind;
    cout << "enter the number you would like to find: " << endl;
    cin >> numFind;

    bool find = linearSearch(linear_Search, size, numFind);
    if (find)
    {
        cout << "its find out" << endl;
    }
    else
    {
        cout << "its not find out" << endl;
    }
}