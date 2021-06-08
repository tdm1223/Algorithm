// 11728. 배열 합치기
// 2021.06.08
// 정렬
#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        s.insert(a);
    }
    for (int i = 0; i < m; i++)
    {
        int b;
        scanf("%d", &b);
        s.insert(b);
    }

    for (auto iter = s.begin(); iter != s.end(); iter++)
    {
        printf("%d ", *iter);
    }
    printf("\n");
    return 0;
}
