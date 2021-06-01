// 하노이의 탑
// 2021.06.01
#include<string>
#include<vector>

using namespace std;

vector<vector<int>> answer;

void hanoi(int from, int by, int to, int n)
{
    if(n==0)
    {
        return;
    }
    hanoi(from, to, by, n-1);
    answer.push_back({from, to});
    hanoi(by, from, to, n-1);
}

vector<vector<int>> solution(int n) {
    hanoi(1,2,3,n);
    return answer;
}
