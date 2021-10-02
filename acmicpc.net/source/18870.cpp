// 18870. 좌표 압축
// 2021.10.02
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>

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

    vector<int> uniqueVector(v);
    sort(uniqueVector.begin(), uniqueVector.end());
    uniqueVector.erase(unique(uniqueVector.begin(), uniqueVector.end()), uniqueVector.end());

    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(uniqueVector.begin(), uniqueVector.end(), v[i]) - uniqueVector.begin() << ' ';
    }

    return 0;
