// 12836. 가계부 (Easy)
// 2022.01.11
// 구현
#include<iostream>

using namespace std;

long long arr[10001];
int main()
{
    long long n, q;
    cin >> n >> q;

    while (q-- > 0)
    {
        long long num, a, b;
        cin >> num >> a >> b;;

        if (num == 1)
        {
            arr[a] += b;
        }
        else
        {
            long long sum = 0;
            for (long long i = a; i <= b; i++)
            {
                sum += arr[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}
