// 같은 숫자는 싫어
// 2019.06.28
#include<vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i-1]==arr[i]) // 이전 글자와 같은 글자라면
        {
            continue;
        }
        else
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
