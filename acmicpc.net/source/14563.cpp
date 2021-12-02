// 14563. 완전수
// 2021.12.03
// 수학
#include<iostream>
#include<set>

using namespace std;

set<int> numSet;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        numSet.clear();
        int n;
        cin >> n;

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                numSet.insert(i);
                numSet.insert(n / i);
            }
        }

        int sum = 0;
        for (auto num : numSet)
        {
            sum += num;
        }
        sum -= n;

        if (sum > n)
        {
            cout << "Abundant" << endl;
        }
        else if (sum < n)
        {
            cout << "Deficient" << endl;
        }
        else
        {
            cout << "Perfect" << endl;
        }
    }
    return 0;
}
