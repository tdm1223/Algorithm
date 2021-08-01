// 10102. 개표
// 2021.08.01
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int v;
    cin >> v;
    string s;
    cin >> s;

    int aCnt = 0;
    int bCnt = 0;
    for (int i = 0; i < v; i++)
    {
        if (s[i] == 'A')
        {
            aCnt++;
        }
        else
        {
            bCnt++;
        }
    }

    if (aCnt == bCnt)
    {
        cout << "Tie" << endl;
    }
    else if (aCnt < bCnt)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "A" << endl;
    }
    return 0;
}
