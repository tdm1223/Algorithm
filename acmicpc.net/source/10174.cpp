// 10174. 팰린드롬
// 2022.04.16
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        bool IsPalindrome = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = tolower(s[i]);
            }
        }

        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - i - 1])
            {
                IsPalindrome = false;
                break;
            }
        }
        if (IsPalindrome)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
