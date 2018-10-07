// 숫자의 표현
using namespace std;

int solution(int n)
{
	int answer = 0;
	//10000이하의 자연수 이므로 n까지 모든 경우에 대해 조사
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = i; sum <= n; j++)
		{
			sum += j;
			if (sum == n)
			{
				answer++;
			}
		}
	}

	return answer;
}
