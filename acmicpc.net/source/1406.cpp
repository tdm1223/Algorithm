// 1406. 에디터
// 2020.04.11
// 링크드 리스트
#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
    string s;
    cin >> s;

    list<char> list;
    for (int i = 0; i < s.size(); i++)
    {
        list.push_back(s[i]);
    }
    auto cur = list.end();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char order;
        cin >> order;
        switch (order)
        {
        case 'L': // 왼쪽으로
            if (cur != list.begin())
            {
                cur--;
            }
            break;
        case 'D': // 오른쪽으로
            if (cur != list.end())
            {
                cur++;
            }
            break;
        case 'B': // 왼쪽에 있는 문자 삭제
            if (cur != list.begin())
            {
                cur--;
                cur = list.erase(cur);
            }
            break;
        case 'P': // 왼쪽에 문자 추가
            char tmp;
            cin >> tmp;
            list.insert(cur, tmp);
            break;
        }
    }

    for (auto iter = list.begin(); iter != list.end(); iter++)
    {
        cout << *iter;
    }
    cout << endl;
    return 0;
}
