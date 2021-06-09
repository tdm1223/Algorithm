// 2592. 대표값
// 2021.06.10
// 수학
#include<iostream>

using namespace std;

int arr[1001];
int main()
{
    int avg = 0;
    int k;
    for (int i = 0; i < 10; i++)
    {
        cin >> k;
        avg += k;
        arr[k]++;
    }

    avg /= 10;
    int ans = 0;
    int maxVal = 0;
    for (int i = 0; i < 1001; i++)
    {
        if (ans < arr[i])
        {
            maxVal = i;
            ans = arr[i];
        }
    }
    cout << avg << endl << maxVal << endl;
    return 0;
}
