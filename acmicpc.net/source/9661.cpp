// 9661. 돌 게임 7
// 2021.11.28
// 게임 이론
#include<iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n % 5 == 0 or n % 5 == 2)
    {
        cout << "CY" << endl;
    }
    else
    {
        cout << "SK" << endl;
    }
    return 0;
}
