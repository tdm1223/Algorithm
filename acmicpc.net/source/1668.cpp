// 1668. 트로피 진열
// 2020.03.29
// 탐색
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    // 트러피가 1개일때는 왼쪽 오른쪽 모두 1
    if (n == 1)
    {
        cout << 1 << endl << 1 << endl;
    }
    else
    {
        // 왼쪽에서 볼때
        int top = height[0];
        int left = 1;
        for (int i = 1; i < n; i++)
        {
            if (height[i] > top)
            {
                left++;
                top = height[i];
            }
        }

        // 오른쪽에서 볼때
        top = height[n - 1];
        int right = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (height[i] > top)
            {
                right++;
                top = height[i];
            }
        }
        cout << left << endl << right << endl;
    }

    return 0;
}
