// 핸드폰 번호 가리기
// 2018.10.29
#include <string>

using namespace std;

string solution(string phone_number)
{
	string answer = phone_number;
	//뒷 4자리를 제외하고 *로 바꿈
	for (int i = 0; i<phone_number.size() - 4; i++)
	{
		answer[i] = '*';
	}
	return answer;
}
