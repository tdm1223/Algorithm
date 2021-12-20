// 11945. 뜨거운 붕어빵
// 2021.12.21
// 구현
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < s.size(); i++)
    {
        reverse(s[i].begin(), s[i].end());
        cout << s[i] << endl;
    }
    return 0;
}
