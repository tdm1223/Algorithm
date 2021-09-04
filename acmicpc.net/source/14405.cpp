// 14405. 피카츄
// 2021.09.04
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p')
        {
            if (s[i + 1] == 'i')
            {
                i++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if (s[i] == 'k')
        {
            if (s[i + 1] == 'a')
            {
                i++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if (s[i] == 'c')
        {
            if (s[i + 1] == 'h' && s[i + 2] == 'u')
            {
                i += 2;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else
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
    return 0;
}
