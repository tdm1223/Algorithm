// 14593. 2017 아주대학교 프로그래밍 경시대회 (Large)
// 2021.10.05
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int s, c, l;
    int maxS = 0;
    int minC = 0;
    int minL = 0;
    int maxIdx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> s >> c >> l;

        if (maxS < s)
        {
            maxIdx = i;
            maxS = s;
            minC = c;
            minL = l;
        }
        else if (maxS == s)
        {
            if (minC == c)
            {
                if (minL > l)
                {
                    maxIdx = i;
                    maxS = s;
                    minC = c;
                    minL = l;
                }
            }
            else if (minC > c)
            {
                maxIdx = i;
                maxS = s;
                minC = c;
                minL = l;
            }
        }
    }
    cout << maxIdx << endl;
    return 0;
}
