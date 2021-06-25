// 2154. 수 이어 쓰기 3
// 2021.06.25
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s += to_string(i);
    }

    cout << s.find(to_string(n)) + 1 << endl;
    return 0;
}
