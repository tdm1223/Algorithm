// 13698. Hawk eyes
// 2021.02.21
// 입문용
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int arr[4] = { 1, 0, 0, 2 };
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'A':
            swap(arr[0], arr[1]);
            break;
        case 'B':
            swap(arr[0], arr[2]);
            break;
        case 'C':
            swap(arr[0], arr[3]);
            break;
        case 'D':
            swap(arr[1], arr[2]);
            break;
        case 'E':
            swap(arr[1], arr[3]);
            break;
        case 'F':
            swap(arr[2], arr[3]);
            break;
        }
    }

    int minValue = -1;
    int maxValue = -1;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == 1)
        {
            minValue = i;
        }
        if (arr[i] == 2)
        {
            maxValue = i;
        }
    }
    cout << minValue + 1 << endl << maxValue + 1 << endl;
    return 0;
}
