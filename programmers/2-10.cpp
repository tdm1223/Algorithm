// 땅따먹기
#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}
int d[100001][4];
int solution(vector<vector<int> > land)
{
    for (int i = 0; i < 4; ++i)
    {
        d[0][i] = land[0][i];
    }

    for (int i = 0; i <land.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                if (j != k)
                {
                    d[i][j] = max(d[i][j], land[i][j] + d[i-1][k]);
                }
            }
        }
    }
    int answer = 0;
    for (int i = 0; i < 4; ++i)
    {
        answer = max(answer, d[land.size()-1][i]);
    }
    return answer;
}
