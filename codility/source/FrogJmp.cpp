// FrogJmp
// 2021.10.13
#include<iostream>

int solution(int X, int Y, int D)
{
    int ans = (Y - X) / D;
    if ((Y - X) % D != 0)
    {
        ans++;
    }
    return ans;
}
