//https://www.hackerrank.com/challenges/jumping-on-the-clouds
int jumpingOnClouds(vector<int> c)
{
    int answer=-1;//처음 0도 세기때문에 -1부터 센다.
    for(int i=0;i<c.size();i++)
    {
        answer++;
        if(c[i+2]==1)
        {
            continue;
        }
        else if(i+2<c.size())
        {
            i++;
        }
    }
    return answer;
}
