// 17009. Winning Score
// 2021.04.06
// 입문용
#include<iostream>

using namespace std;


int main()
{
    int a, b, c;
    int apples = 0;
    int bananas = 0;
    cin >> a >> b >> c;
    apples = a * 3 + b * 2 + c;
    cin >> a >> b >> c;
    bananas = a * 3 + b * 2 + c;
    if (apples > bananas)
    {
        cout << "A" << endl;
    }
    else if (apples < bananas)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "T" << endl;
    }
    return 0;
}
