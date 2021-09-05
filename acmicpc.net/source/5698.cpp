// 5698. Tautogram
// 2021.09.05
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    char autogram;
    while (1)
    {
        getline(cin, s);
        autogram = tolower(s[0]);

        if (s == "*")
        {
            break;
        }

        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (tolower(s[i + 1]) != autogram)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
