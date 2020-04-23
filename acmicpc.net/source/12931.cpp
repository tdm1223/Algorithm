// 12931. 두 배 더하기
// 2020.04.23
// 구현
#include<iostream>
#include<vector>

using namespace std;

int n;
// 모두 2의배수인지 체크하는 함수
bool check(vector<int>& v)
{
    for (int j = 0; j < n; j++)
    {
        if (v[j] % 2 == 1)
        {
            return false;
        }
    }
    return true;
}
// 모두 0인지 체크하는 함수
bool allZero(vector<int>& v)
{
    for (int j = 0; j < n; j++)
    {
        if (v[j] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    // A->B가 아닌 B->A를 계산한다.
    while (1)
    {
        // 하나라도 2의 배수가 아니라면 돌면서 2의 배수가 아닌것 -1하고 연산횟수 +1
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
            {
                v[i]--;
                ans++;
            }
        }

        // 모두 0이면 종료
        if (allZero(v))
        {
            break;
        }

        // 모두 2의 배수라면 2로 나누고 연산횟수 +1
        if (check(v))
        {
            for (int j = 0; j < n; j++)
            {
                v[j] /= 2;
            }
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
