// 5073. 삼각형과 세 변
// 2021.04.21
// 구현
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        int sum = a + b + c;
        // 올바른 삼각형인지 체크하기 위해 세 변의 길이를 오름차순으로 정렬함
        a = min(min(a, b), c);
        c = max(max(a, b), c);
        b = sum - a - c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        if (c >= a + b)
        {
            cout << "Invalid" << endl;
        }
        else if (a == b && b == c && c == a)
        {
            cout << "Equilateral" << endl;
        }
        else if ((a == b) || (a == c) || (b == c))
        {
            cout << "Isosceles" << endl;
        }
        else
        {
            cout << "Scalene" << endl;
        }
    }
    return 0;
}
