// 16435. 스네이크버드
// 2022.05.21
// 정렬
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    int x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= l)
        {
            l++;
        }
        else
        {
            break;
        }
    }

    cout << l << endl;
    return 0;
}
