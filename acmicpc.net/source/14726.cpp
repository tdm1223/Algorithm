// 14726. 신용카드 판별
// 2021.05.05
// 수학
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 0;
    vector<int> v;
    while (t-- > 0)
    {
        string s;
        cin >> s;
        v.resize(0);
        // Luhn 공식 적용
        for (int i = s.size()-1; i >= 0; i--)
        {
            v.push_back(s[i] - '0');
        }

        for (int i = 1; i < v.size(); i+=2)
        {
            v[i] *= 2;
            if (v[i] >= 10)
            {
                v[i] = v[i] % 10 + v[i] / 10;
            }
        }

        sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }

        if (sum % 10 == 0)
        {
            cout << "T" << endl;
        }
        else
        {
            cout << "F" << endl;
        }
    }
    return 0;
}
