// 3058. 짝수를 찾아라
// 2020.10.08
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int min = 98765321;
        int sum = 0;
        int k;
        for (int i = 0; i < 7; i++)
        {
            cin >> k;
            if (k % 2 == 0)
            {
                sum += k;
                if (min > k)
                {
                    min = k;
                }
            }
        }
        cout << sum << " " << min << endl;
    }
    return 0;
}
