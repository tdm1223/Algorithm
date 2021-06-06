// 1837. 암호제작
// 2021.06.06
// 수학
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int nums[1000001];
vector<int> primeNumbers;

int main(void)
{
    string s;
    int n;
    cin >> s >> n;

    for (int i = 2; i < n; i++)
    {
        nums[i] = 1;
    }

    for (int i = 2; i * i < n; i++)
    {
        if (nums[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {
                if (nums[j] == 1)
                {
                    nums[j] = 0;
                }
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (nums[i] == 1)
        {
            primeNumbers.push_back(i);
        }
    }

    int ans = 0;
    bool flag = true;
    for (int primeNumber : primeNumbers)
    {
        int div = 0, tmp = 1;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            div = (div + (s[i] - '0') * tmp) % primeNumber;

            tmp *= 10;
            tmp %= primeNumber;
        }

        if (div == 0)
        {
            flag = false;
            ans = primeNumber;
            break;
        }
    }
    if (flag)
    {
        cout << "GOOD" << endl;

    }
    else
    {
        cout << "BAD " << ans << "\n";
    }
    return 0;
}
