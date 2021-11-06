// 2529. 부등호
// 2021.11.06
// 브루트 포스
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int visit[10];
int k;

int nums[10];
long long maxVal = -1;
long long minVal = 9999999999;

vector<char> v;

void go(int n, long long val)
{
    if (n == k + 1)
    {

        // 부등호 체크
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == '<')
            {
                if (nums[i] > nums[i + 1])
                {
                    return;
                }
            }
            else
            {
                if (nums[i] < nums[i + 1])
                {
                    return;
                }
            }
        }

        minVal = min(val, minVal);
        maxVal = max(val, maxVal);
        return;
    }

    for (int i = 0; i <= 9; i++)
    {
        if (visit[i] == 0)
        {
            visit[i] = 1;
            nums[n] = i;
            go(n + 1, val * 10 + i);
            visit[i] = 0;
        }
    }
}

int main()
{
    cin >> k;
    v.resize(k);

    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    go(0, 0);

    cout << maxVal << endl;
    if (to_string(minVal).size() < k + 1)
    {
        cout << 0;
    }
    cout << minVal << endl;
    return 0;
}
