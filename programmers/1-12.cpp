// 하샤드 수
#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
	bool answer = true;
	int tmp = x;
	int k = 0;
	while (tmp>0)
	{
		k += tmp % 10;
		tmp /= 10;
	}
	if (x%k != 0)
	{
		answer = false;
	}

	return answer;
}
