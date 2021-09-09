// 10471. 공간을 만들어 봅시다
// 2021.09.09
// 브루트 포스
#include<iostream>
#include<set>
#include<vector>

using namespace std;

int arr[101];
int main()
{
    int w, p;
    cin >> w >> p;

    vector<int> v;
    v.push_back(0);
    v.push_back(w);
    for (int i = 0; i < p; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    set<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] - v[j] != 0)
            {
                s.insert(abs(v[i] - v[j]));
            }
        }
    }

    for (auto num : s)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
