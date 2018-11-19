// 구명보트
// 2018.11.19
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;
    //내림차순 정렬
    sort(people.begin(),people.end(),greater<int>());
    int size = people.size(); // 사람의 수
    for(int i=0;i<size;i++)
    {
        if(people[i]+people[size-1]<=limit)
        {
            // 가장 가벼운 사람과 무거운사람이 탑승 하므로 size를 감소시키고 answer를 증가시킴
            size--;
            answer++;
        }
        else
        {
            // 한명만 탑승하므로 answer만 증가시킴
            answer++;
        }
    }
    return answer;
}
