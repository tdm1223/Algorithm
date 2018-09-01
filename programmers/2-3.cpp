//JadenCase 문자열 만들기
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==' ')
        {
            s[i]=toupper(s[i]);
        }
        else
            s[i]=tolower(s[i]);
    }
    return s;
}
