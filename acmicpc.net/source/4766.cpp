// 4766. 일반 화학 실험
// 2021.05.18
// 수학
#include<iostream>

using namespace std;

int main()
{
    float before = 0.0f;
    float after = 0.0f;
    cin >> before;
    while (1)
    {
        cin >> after;
        if (after == 999)
        {
            break;
        }
        printf("%.2f\n", after - before);
        before = after;
    }
    return 0;
}
