// 15235. Olympiad Pizza
// 2022.02.23
// 자료 구조
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int nums = n;
    int count = 0;
    while (nums > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                v[i]--;
                count++;
            }

            if (v[i] == 0)
            {
                ans[i] = count;
                nums--;
                v[i] = -1;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
