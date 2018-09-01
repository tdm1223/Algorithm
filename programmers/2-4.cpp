// 124 나라의 숫자
#include <string>

using namespace std;

char num[3] = {'4','1','2'};
string solution(int n) {
    string answer = "";
    while (n > 0)
    {
        int tmp=n%3;
        answer = num[n%3]+answer;
        n /= 3;

        if (tmp == 0)
            n--;
    }
    return answer;
}
