// 두 정수 사이의 합
// 2018.10.29
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b)
{
	long long answer = 0;
	//대소 비교 해서 b가 큰 수가 되도록 만들어줌.
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b; i++)
	{
		answer += i;
	}
	return answer;
}
