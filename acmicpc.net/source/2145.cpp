// 2145. 숫자 놀이
// 2022.01.15
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        while (n >= 10)
        {
            int num = n;
            n = 0;
            while (num > 0)
            {
                n += num % 10;
                num /= 10;
            }
        }

        cout << n << endl;
    }
    return 0;
}
