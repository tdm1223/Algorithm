// 4435. 중간계 전쟁
// 2021.04.20
// 구현
#include<iostream>

using namespace std;

int gan[6] = { 1,2,3,3,4,10 };
int sau[7] = { 1,2,2,2,3,5,10 };
int main()
{
    int t;
    cin >> t;
    int x;
    int sum1 = 0;
    int sum2 = 0;
    for (int testCase = 1; testCase <= t; testCase++)
    {
        sum1 = 0;
        sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> x;
            sum1 += x * gan[i];
        }

        for (int i = 0; i < 7; i++)
        {
            cin >> x;
            sum2 += x * sau[i];
        }

        if (sum1 < sum2)
        {
            cout << "Battle " << testCase << ": Evil eradicates all trace of Good" << endl;
        }
        else if (sum1 > sum2)
        {
            cout << "Battle " << testCase << ": Good triumphs over Evil" << endl;
        }
        else
        {
            cout << "Battle " << testCase << ": No victor on this battle field" << endl;
        }
    }
    return 0;
}
