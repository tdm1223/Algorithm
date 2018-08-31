//이상한 문자 만들기
#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string s) {
    string answer = "";

    int count=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ') count=0;
        else
        {
            if(count%2==0) s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
        }
        count++;
   }        
    answer=s;
    return answer;
}