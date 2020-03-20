// 등굣길
// 2019.10.12
// 다이나믹 프로그래밍
#include<vector>
#include<iostream>

using namespace std;

int d[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    for(int i=0;i<puddles.size();i++)
    {
        d[puddles[i][1]][puddles[i][0]]=-1; //웅덩이
    }
    d[1][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if (d[i][j] == -1)
            {
                d[i][j] = 0;
                continue;
            }
            if(i==1 && j==1)
            {
                continue;
            }
            d[i][j]=(d[i-1][j]+d[i][j-1])%1000000007;
        }
    }
    answer=d[n][m]%1000000007;
    return answer;
}
