// 13322. 접두사 배열
// 2021.10.21
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    // 접두사 배열은 순서 자체가 정렬이 끝난거라 순서대로 출력만 하면된다.
    for (int i = 0; i < s.size(); i++)
    {
        cout << i << "\n";
    }
    return 0;
}
