// 4999. 아!
// 2021.07.19
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    if (a.find(b) == string::npos)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "go" << endl;
    }
    return 0;
}
