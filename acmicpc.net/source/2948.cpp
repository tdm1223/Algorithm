// 2948. 2009년
// 2021.05.09
// 구현
#include<iostream>
#include<string>

using namespace std;

string dow[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" }; // Day of the week
int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int main()
{
    int d, m;
    int sum = 0;
    cin >> d >> m;
    for (int i = 0; i < m - 1; i++)
    {
        sum += days[i];
    }
    sum += d;
    sum %= 7;
    cout << dow[sum] << endl;
    return 0;
}
