//문자열 다루기 기본
#include <string>
#include<iostream>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()!=4 && s.size()!=6) answer=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-'0'>9){
            answer=false;
            break;
        }
    }

    return answer;
}
