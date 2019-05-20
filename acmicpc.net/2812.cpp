// 2812. 크게 만들기
// 2019.05.20
// 그리디 알고리즘, 수학
#include<string>
#include<queue>
#include<iostream>

using namespace std;

deque<char> dq;

int main()
{
    int n,k;
    cin>>n>>k;
    string num;
    cin>>num;

    string answer="";
    // answer[1] = max(number[b1]) (0<=b1<=k)
    // answer[2] = max(str[b2]) (b1<b2<k+1)
    // 공식 활용
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && dq.back()<num[i])
        {
            dq.pop_back();
        }
        dq.push_back(num[i]);
    }
    for (int i = k; i<n; i++)
    {
        while(!dq.empty() && dq.back()<num[i])
        {
            dq.pop_back();
        }
        dq.push_back(num[i]);
        answer+=dq.front();
        dq.pop_front();
    }
    cout<<answer<<endl;
    return 0;
}
