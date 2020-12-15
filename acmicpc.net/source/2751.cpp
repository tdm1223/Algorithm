// 2751. 수 정렬하기 2
// 2020.12.15
// 정렬
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }
    return 0;
}
