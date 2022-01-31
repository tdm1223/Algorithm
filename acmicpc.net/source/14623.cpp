// 14623. 감정이입
// 2022.02.01
// 구현
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

long long pow(int p)
{
    int result = 1;
    for (int i = 0; i < p; i++)
    {
        result *= 2;
    }
    return result;
}

string DecToBin(long long num)
{
    string ans = "";
    while (num)
    {
        ans += num % 2 + '0';

        num /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string b1, b2;
    cin >> b1 >> b2;

    long long x = 0;
    long long y = 0;
    for (int i = 0; i < b1.size(); i++)
    {
        x += b1[i] == '1' ? pow(b1.size() - (i + 1)) : 0;
    }

    for (int i = 0; i < b2.size(); i++)
    {
        y += b2[i] == '1' ? pow(b2.size() - (i + 1)) : 0;
    }

    cout << DecToBin(x * y) << endl;
    return 0;
}
