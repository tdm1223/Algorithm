// 15917. 노솔브 방지문제야!!
// 2021.08.26
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &k);
        if ((k & (-k)) == k)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
