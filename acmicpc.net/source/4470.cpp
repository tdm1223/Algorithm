// 4470. 줄번호
// 2021.10.27
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string s;
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        cout << i << ". " << s << endl;
    }
    return 0;
}
