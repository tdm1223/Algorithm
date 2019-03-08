// 가운데 글자 가져오기
// 2019.03.08
#include<string>
#include<vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    //단어의 길이가 짝수 일때
    if(s.size()%2==0)
    {
        answer=s[s.size()/2-1];
        answer+=s[s.size()/2];
    }
    //단어의 길이가 홀수 일때
    else
    {
        answer=s[s.size()/2];
    }
    return answer;
}
