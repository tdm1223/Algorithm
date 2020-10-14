// 14935. FA
// 2020.10.15
// 구현
#include<iostream>
#include<string>

using namespace std;

string Calc(string s)
{
    string tmp;
    tmp = ((s[0]) - '0' * s.size()) + '0';
    return tmp;
}
int main()
{
    string s;
    cin >> s;
    int t = 10;
    while (t-- > 0)
    {
        s = Calc(s);
    }
    if (s.size() == 1)
    {
        cout << "FA" << endl;
    }
    else
    {
        cout << "NFA" << endl;
    }
    return 0;
}

// 추가적으로 입력할 수 있는 모든 수는 사실 FA이다.
