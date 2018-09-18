//핸드폰 번호 가리기
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    for(int i=0;i<phone_number.size()-4;i++)
    {
        answer[i]='*';
    }
    return answer;
}
