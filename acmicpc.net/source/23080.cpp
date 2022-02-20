// 23080. 스키테일 암호
// 2022.02.20
// 문자열
#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i += n)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
