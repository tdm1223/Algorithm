// 14581. 팬들에게 둘러싸인 홍준
// 2021.05.03
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < 3; i++)
    {
        cout << ":fan:";
    }
    cout << endl;
    cout << ":fan::" << s << "::fan:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << ":fan:";
    }
    return 0;
}
