// 콜라츠 추측
// 2019.03.08
#include<vector>

using namespace std;

int solution(int num)
{
	int answer = 0;
	long long val = num;
	while (val != 1)
	{
		answer++;
		if (val % 2 == 0)
		{
			val = val / 2;
		}
		else
		{
			val = val * 3 + 1;
		}
		if (answer > 500) // 500번 반복해도 1이 되지 않을 때
		{
			answer = -1;
			break;
		}
	}
	return answer;
}
