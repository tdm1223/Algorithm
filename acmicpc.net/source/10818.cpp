// 10818. 최소, 최대
// 2021.10.07
// 구현
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[v.size() - 1] << endl;
    return 0;
}
