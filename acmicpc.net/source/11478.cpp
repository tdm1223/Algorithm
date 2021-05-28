// 11478. 서로 다른 부분 문자열의 개수
// 2021.05.28
// 자료구조, 해싱
#include<set>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    set<string> sets;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j < s.size() - i + 1; j++)
        {
            sets.insert(s.substr(i, j));
        }
    }
    cout << sets.size() << endl;
    return 0;
}
