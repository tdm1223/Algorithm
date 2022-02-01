// 19944. 뉴비의 기준은 뭘까?
// 2022.02.01
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m == 1 or m == 2)
    {
        cout << "NEWBIE!" << endl;
    }
    else if (m <= n)
    {
        cout << "OLDBIE!" << endl;
    }
    else
    {
        cout << "TLE!" << endl;
    }
    return 0;
}
