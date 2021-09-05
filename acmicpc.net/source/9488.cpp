// 9488. The n Days of Christmas
// 2021.09.05
// 수학
#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        cout << n * (n + 1) * (n + 2) / 6 << "\n";
    }
    return 0;
}
