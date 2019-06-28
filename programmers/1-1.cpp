// 2016년
// 2019.06.28
#include<string>
#include<vector>

using namespace std;

// 1~12월까지 월에 해당하는 말일을 저장
int month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
// 요일 저장
string day[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};

string solution(int a, int b)
{
    string answer = "";
    int count = 0;
    for(int i=0;i<a;i++)
    {
        count += month[i];
    }
    count+=b;
    count%=7;
    answer = day[count];
    return answer;
}
