// 카카오 프렌즈 컬러링북
// 2019.06.24
#include<iostream>
#include<queue>

using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
vector<int> solution(int m, int n, vector<vector<int>> picture)
{
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int visit[101][101]={0,};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visit[i][j] && picture[i][j]!=0)
            {
                number_of_area++;
                int cnt = 0;
                visit[i][j]=1;
                int num = picture[i][j];
                queue<pair<int,int>> q;
                q.push({i,j});
                while(!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    cnt++;
                    q.pop();
                    for(int i=0;i<4;i++)
                    {
                        int xx = x+dx[i];
                        int yy = y+dy[i];
                        if(xx<0 || yy <0 || xx>=m || yy>=n)
                        {
                            continue;
                        }

                        if(picture[xx][yy]==num && !visit[xx][yy])
                        {
                            visit[xx][yy]=1;
                            q.push({xx,yy});
                        }
                    }
                }
                max_size_of_one_area=max(max_size_of_one_area,cnt);
            }
        }
    }
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
