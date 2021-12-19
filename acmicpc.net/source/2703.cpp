// 2703. Cryptoquote
// 2021.12.19
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n-- > 0)
    {
        string s;
        getline(cin, s);

        string b;
        getline(cin, b);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                cout << " ";
            }
            else
            {
                int k = s[i] - 'A';
                cout << b[k];
            }
        }
        cout << endl;
    }

    return 0;
}
