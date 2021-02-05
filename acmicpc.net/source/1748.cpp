// 1748. 수 이어쓰기 1
// 2021.02.05
// 브루트 포스, 구현
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n.size() == 1)
    {
        cout << n << endl;
    }
    else
    {
        int answer = 0;
        for (int i = 1; i < n.size(); i++)
        {
            answer += i * (9 * pow(10, i - 1));
        }
        answer += n.size() * (stoi(n) - pow(10, n.size() - 1) + 1);
        cout << answer << endl;
    }
    return 0;
}
