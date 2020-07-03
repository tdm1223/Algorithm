// 13752. 히스토그램
// 2020.07.03
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cout << "=";
        }
        cout << endl;
    }
    return 0;
}
