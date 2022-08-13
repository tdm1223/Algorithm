// 25205. 경로당펑크 2077
// 2022.08.13
// 문자열
#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int ans = 1;
    switch (s[n - 1])
    {
    // 마지막 글자가 중성인지 아닌지 확인한다.
    case 'k':
    case 'o':
    case 'i':
    case 'j':
    case 'p':
    case 'u':
    case 'h':
    case 'y':
    case 'n':
    case 'b':
    case 'm':
    case 'l':
        ans = 0;
        break;
    }

    cout << ans << endl;
    return 0;
}
