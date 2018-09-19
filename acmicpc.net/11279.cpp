// 11279. 최대힙
#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>

using namespace std;

priority_queue<int> q;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a); //cin으로 입력받으면 시간 초과가 뜬다.

        if (a == 0)
        {
            if (q.empty())
                printf("0\n");
            else
            {
                printf("%d\n", q.top());
                q.pop();
            }
        }
        else
        {
            q.push(a);
        }
    }

    return 0;
}
