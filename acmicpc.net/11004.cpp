// 11004. K번째 수
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int * arr = new int[n];
    int num;

    for(int i=0; i<n; i++){
        scanf("%d", &num);
        arr[i] = num;
    }

    sort(&arr[0], &arr[n]);

    printf("%d", arr[k-1]);

    delete []arr;

    return 0;
}
