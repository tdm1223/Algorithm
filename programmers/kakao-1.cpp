// kakao1. 비밀 지도
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

string change(int tmp, int n)
{
	string s;
	for (int i = 0; i < n; i++)
	{
		int a = tmp % 2;
		s += (a + 48);
		tmp /= 2;
	}
    reverse(s.begin(),s.end());
	return s;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0;i<n;i++)
    {
        answer.push_back(change(arr1[i]|arr2[i],n));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(answer[i][j]=='1') answer[i][j]='#';
            else answer[i][j]=' ';
        }
    }
    return answer;
}
