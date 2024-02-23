#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int size = 5;

    vector<vector<int>> ans;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr1[i] + arr1[j] == 5)
            {

                vector<int> temp;
                temp.push_back(min(arr1[i], arr1[j]));
                temp.push_back(max(arr1[i], arr1[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i][0] << " " << ans[i][0] << endl;
    // }

    for (const auto &pair : ans)
    {
        cout << "(" << pair[0] << ", " << pair[1] << ") ";
    }
}