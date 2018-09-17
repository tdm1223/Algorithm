// 더 맵게
#include <string>
#include <vector>
#include<queue>
#include<functional>
using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int> > q;
    for(int i=0;i<scoville.size();i++)
    {
        q.push(scoville[i]);
    }
    int answer = 0;
    while(1)
    {
        if(q.top()>=K) break;
        int first = q.top();
        q.pop();
        if(q.empty() && q.top()<K)
            return -1;
        int second = q.top();
        q.pop();
        q.push(first+(second*2));
        answer++;
    }
    return answer;
}
