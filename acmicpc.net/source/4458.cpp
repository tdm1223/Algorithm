// 4458. 첫 글자를 대문자로
// 2021.05.03
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    cin.ignore(10, '\n');
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        if (s[0] >= 97)
        {
            s[0] -= 32;
        }

        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
        s.clear();
        cout << endl;
    }
    return 0;
}
