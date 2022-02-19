// 23627. driip
// 2022.02.20
// 문자열
#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size() < 5)
    {
        cout << "not cute" << endl;
    }
    else
    {
        if (s.substr(s.size() - 5) == "driip")
        {
            cout << "cute" << endl;
        }
        else
        {
            cout << "not cute" << endl;
        }
    }
    return 0;
}
