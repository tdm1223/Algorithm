// 18766. 카드 바꿔치기
// 2021.02.06
// 정렬
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    bool flag;
    vector<string> v;
    vector<string> v2;
    for (int i = 0; i < n; i++)
    {
        flag = true;
        int k;
        cin >> k;
        v.clear();
        v2.clear();
        for (int j = 0; j < k; j++)
        {
            cin >> s;
            v.push_back(s);
        }

        for (int j = 0; j < k; j++)
        {
            cin >> s;
            v2.push_back(s);
        }

        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());
        for (int j = 0; j < k; j++)
        {
            if (v[j] != v2[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NOT CHEATER" << endl;
        }
        else
        {
            cout << "CHEATER" << endl;
        }
    }
    return 0;
}
