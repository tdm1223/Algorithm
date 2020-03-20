// 하샤드 수
// 2019.03.08
#include<string>
#include<vector>

using namespace std;

bool solution(int x)
{
	bool answer = true;
	int tmp = x;
	int k = 0;
	while (tmp > 0)
	{
		k += tmp % 10; // 자릿수를 모두 더함
		tmp /= 10;
	}
	if (x%k != 0) // 나누어 떨어지지 않는다면 하샤드 수가 아니다.
	{
		answer = false;
	}
	return answer;
}
