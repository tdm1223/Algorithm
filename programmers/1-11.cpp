// 짝수와 홀수
// 2018.10.29
#include <string>
#include <vector>

using namespace std;

string solution(int num)
{
	string answer = "";
	if (num % 2 == 0) // 짝수
	{
		answer = "Even";
	}
	else // 홀수
	{
		answer = "Odd";
	}
	return answer;
}
