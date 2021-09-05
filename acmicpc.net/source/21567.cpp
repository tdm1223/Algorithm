// 21567. 숫자의 개수 2
// 2021.09.06
// 구현
#include<iostream>

using namespace std;

int arr[10];
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    unsigned long long ans = 1;
    ans *= a;
    ans *= b;
    ans *= c;

    while (ans != 0)
    {
        arr[ans % 10]++;
        ans /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
