// 1461. 도서관
// 2020.06.07
// 그리디 알고리즘
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int sum(vector<int>& v, int start, int interval)
{
    int result = 0;
    for (int i = start; i < v.size(); i += interval)
    {
        result += abs(v[i]) * 2;
    }
    return result;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // 양수 음수 구별하여 담기
        if (v[i] > 0)
        {
            positive.push_back(v[i]);
        }
        else
        {
            negative.push_back(v[i]);
        }
    }

    int ans = 0;
    // 정렬
    sort(positive.begin(), positive.end(), greater<int>());
    sort(negative.begin(), negative.end());

    int positiveIndex = 0;
    int negativeIndex = 0;
    // 양수만 존재
    if (negative.size() == 0)
    {
        positiveIndex = m;
        ans += positive[0]; // 가장 먼것은 한번만 더함
        // 처리할게 남음
        if (positiveIndex < positive.size())
        {
            ans += sum(positive, m, m);
        }
    }
    // 음수만 존재
    else if (positive.size() == 0)
    {
        negativeIndex = m; // 가장 먼것은 한번만 더함
        ans += abs(negative[0]);
        // 처리할게 남음
        if (negativeIndex < negative.size())
        {
            ans += sum(negative, m, m);
        }
    }
    else if (positive[0] > abs(negative[0]))
    {
        positiveIndex = m;
        ans += positive[0]; // 가장 먼것은 한번만 더함
        // 처리할게 남음
        if (positiveIndex < positive.size())
        {
            ans += sum(positive, m, m);
        }
        ans += sum(negative, 0, m);
    }
    else if (positive[0] < abs(negative[0]))
    {
        negativeIndex = m;
        ans += abs(negative[0]); // 가장 먼것은 한번만 더함
        // 처리할게 남음
        ans += sum(positive, 0, m);
        if (negativeIndex < negative.size())
        {
            ans += sum(negative, m, m);
        }
    }

    cout << ans << endl;
    return 0;
}
