// 14561. 회문
// 2021.12.03
// 수학
#include<iostream>
#include<vector>

using namespace std;

vector<char> v;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        v.clear();

        long long a, n;
        cin >> a >> n;

        while (a != 0)
        {
            v.push_back((a % n) + '0');
            a /= n;
        }

        bool flag = true;
        for (int i = 0; i <= v.size() / 2; i++)
        {
            if (v[i] != v[v.size() - i - 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
