// 2467. 용액
// 2020.05.05
// 투 포인터
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // 정렬

    int leftPointer = 0;
    int rightPointer = v.size() - 1;
    int total = 2e9;

    int left = 0;
    int right = 0;
    while (leftPointer < rightPointer)
    {
        int a = v[leftPointer];
        int b = v[rightPointer];

        if (abs(a + b) < total)
        {
            total = abs(a + b);
            left = v[leftPointer];
            right = v[rightPointer];
        }

        // 0보다 작으면 왼쪽 포인터를 이동하고 크면 오른쪽 포인터를 이동한다.
        // 0이라면 더이상 진행할 필요가 없기 때문에 종료한다.
        if (a + b < 0)
        {
            leftPointer++;
        }
        else if (a + b > 0)
        {
            rightPointer--;
        }
        else
        {
            break;
        }
    }

    cout << left << " " << right << endl;
    return 0;
}
