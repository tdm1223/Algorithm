// 21964. 선린인터넷고등학교 교가
// 2021.09.20
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << s.substr(n - 5) << endl;

    return 0;
}
