// 5026. 박사 과정
// 2021.06.05
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n = 0, sum = 0, temp = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        cin >> s;
        if (s == "P=NP")
        {
            cout << "skipped" << endl;
        }
        else
        {
            for (int j = 0; j < s.size(); j++)
            {
                temp = 0;
                while (s[j] != '+' && s[j] != '\0')
                {
                    temp *= 10;
                    temp += s[j] - '0';
                    j++;
                }
                sum += temp;
            }
            cout << sum << endl;
            s.clear();
        }
    }
    return 0;
}
