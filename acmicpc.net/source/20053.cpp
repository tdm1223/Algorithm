// 20053. 최소, 최대 2
// 2021.10.07
// 구현
#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    int n;
    int k;
    while (t-- > 0)
    {
        cin >> n;
        int maxValue = -1000001;
        int minValue = 1000001;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if (k < minValue)
            {
                minValue = k;
            }
            if (k > maxValue)
            {
                maxValue = k;
            }
        }
        cout << minValue << " " << maxValue << "\n";
    }
    return 0;
}
