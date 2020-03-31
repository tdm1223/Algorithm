// 문자열 뒤집기
// 2020.03.31
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
