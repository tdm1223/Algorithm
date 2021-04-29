// 3028. 창영마을
// 2021.04.29
// 구현
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int arr[3] = { 1, 0, 0 };
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            swap(arr[0], arr[1]);
        }
        else if (s[i] == 'B')
        {
            swap(arr[1], arr[2]);
        }
        else if (s[i] == 'C')
        {
            swap(arr[0], arr[2]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
