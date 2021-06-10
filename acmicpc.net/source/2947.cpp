// 2947. 나무 조각
// 2021.06.10
// 시뮬레이션
#include<iostream>
#include<algorithm>

using namespace std;

int arr[6];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // 버블 정렬 구현
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 5 - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                for (int k = 0; k < 5; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
