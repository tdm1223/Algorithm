//���ڿ��� ������ �ٲٱ�
// int answer=stoi(s); 한 줄로 해결 가능

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-' || s[i]=='+') continue;
        answer= answer * 10 + (s[i]-'0');
    }
    if(s[0]=='-') answer*=-1;
    return answer;
}
