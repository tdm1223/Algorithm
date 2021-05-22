// 3062. 수 뒤집기
// 2021.05.22
// 수학
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int reverseInt(int n)
{
    int result = 0;
    while (n > 0)
    {
        result += n % 10;
        result *= 10;
        n /= 10;
    }
    result /= 10;
    return result;
}
int main()
{
    int n;
    int k;
    cin >> n;
    while (n-- > 0)
    {
        cin >> k;

        int sum = k + reverseInt(k);

        string s = to_string(sum);
        bool flag = true;
        for (int i = 0; i <= s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - 1 - i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
