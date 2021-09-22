// 14724. 관리자는 누구?
// 2021.09.22
// 구현
#include<iostream>

using namespace std;

int arr[10][101];
string names[9] = { "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY" };
int main()
{
    int n;
    cin >> n;

    int line = -1;
    int maxValue = -1;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (maxValue < arr[i][j])
            {
                maxValue = arr[i][j];
                line = i;
            }
        }
    }

    cout << names[line] << endl;

    return 0;
}
