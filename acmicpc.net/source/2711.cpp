// 2711. 오타맨 고창영
// 2020.10.20
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string s;
        int k;
        cin >> k >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (k - 1 == i)
            {
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
