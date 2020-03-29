// 18406. 럭키 스트레이트
// 2020.03.29
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int half = s.size() / 2;
    int a = 0;
    int b = 0;
    // 반의 합
    for (int i = 0; i < half; i++)
    {
        a += s[i] - '0';
    }
    // 나머지 반의 합
    for (int i = half; i < s.size(); i++)
    {
        b += s[i] - '0';
    }

    if (a == b)
    {
        cout << "LUCKY" << endl;
    }
    else
    {
        cout << "READY" << endl;
    }
    return 0;
}
