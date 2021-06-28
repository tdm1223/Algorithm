// 9366. 삼각형 분류
// 2021.06.28
// 수학
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<int> side(3);
        cin >> side[0] >> side[1] >> side[2];
        sort(side.begin(), side.end());
        cout << "Case #" << i << ": ";
        if (side[0] == side[1] && side[1] == side[2])
        {
            cout << "equilateral" << endl;
        }
        else if (side[1] == side[0] || side[1] == side[2] || side[2] == side[0])
        {
            if (side[2] < side[0] + side[1])
            {
                cout << "isosceles" << endl;
            }
            else
            {
                cout << "invalid!" << endl;
            }
        }
        else
        {
            if (side[2] < side[0] + side[1])
            {
                cout << "scalene" << endl;
            }
            else
            {
                cout << "invalid!" << endl;
            }
        }
    }
}
