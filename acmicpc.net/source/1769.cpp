// 1769. 3의 배수
// 2021.10.02
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;

    long long tmp = 0;
    if (s.size() >= 2)
    {
        while (1)
        {
            tmp = 0;
            for (auto k : s)
            {
                tmp += k - '0';
            }
            cnt++;
            if (tmp < 10)
            {
                break;
            }
            s = to_string(tmp);
        }
    }
    else
    {
        tmp = stol(s);
    }

    if (tmp % 3 == 0)
    {
        cout << cnt << endl << "YES" << endl;
    }
    else
    {
        cout << cnt << endl << "NO" << endl;
    }
    return 0;
}
