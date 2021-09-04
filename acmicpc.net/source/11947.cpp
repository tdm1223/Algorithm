// 11947. 이런 반전이
// 2021.09.05
// 수학
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;

        // 입력된 수의 자릿수에 대한 중간값을 구한다
        string mid = s;
        mid[0] = '5';
        for (int j = 1; j < mid.length(); j++)
        {
            mid[j] = '0';
        }

        // 자릿수를 기준으로 중간값 이하면 값과 반전의 곱이 답이다.
        // 자릿수를 기준으로 중간값 초과면 중간값과 반전 값의 곱이 답이다.
        if (s > mid)
        {
            string tmp = mid;
            for (int j = 0; j < mid.length(); j++)
            {
                tmp[j] = '9' - mid[j] + '0';
            }
            cout << stol(mid) * stol(tmp) << endl;
        }
        else
        {
            string tmp = s;
            for (int j = 0; j < s.size(); j++)
            {
                tmp[j] = '9' - s[j] + '0';
            }
            cout << stol(s) * stol(tmp) << endl;
        }
    }
    return 0;
}
