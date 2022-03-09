// 23738. Ресторан
// 2022.03.10
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
        {
            cout << 'v';
        }
        else if (s[i] == 'E')
        {
            cout << "ye";
        }
        else if (s[i] == 'H')
        {
            cout << 'n';
        }
        else if (s[i] == 'P')
        {
            cout << 'r';
        }
        else if (s[i] == 'C')
        {
            cout << 's';
        }
        else if (s[i] == 'Y')
        {
            cout << 'u';
        }
        else if (s[i] == 'X')
        {
            cout << 'h';
        }
        else
        {
            cout << (char)(s[i] - 'A' + 'a');
        }
    }
}
