// 다트 게임
// 2019.08.27
#include<string>
#include<iostream>

using namespace std;

int solution(string dartResult) {
	int answer = 0;
	// 숫자 빼서 num배열에 저장
	int num[3];
	int before = 0;
	int cnt = 0;
	int size = dartResult.size();
	for (int i = 0; i < size; i++)
	{
		if (dartResult[i] - '0' >= 0 && dartResult[i] - '0' <= 9)
		{
			if (i - 1 >= 0 && dartResult[i - 1] == '1')
			{
				before *= 10;
				num[cnt - 1] = before;
			}
			else
			{
				before = dartResult[i] - '0';
				num[cnt++] = before;
			}
		}
	}

	cnt = 0;
	for (int i = 0; i < size; i++)
	{
		int cur = num[cnt];
		if (dartResult[i] == 'S')
		{
			if (i + 1 < size && dartResult[i + 1] == '#')
			{
				num[cnt++] = cur * -1;
			}
			else if (i + 1 < size && dartResult[i + 1] == '*')
			{
				if (cnt - 1 >= 0)
				{
					num[cnt - 1] *= 2;
				}
				num[cnt++] *= 2;
			}
			else
			{
				num[cnt++] = cur;
			}
		}
		else if (dartResult[i] == 'D')
		{
			if (i + 1 < size && dartResult[i + 1] == '#')
			{
				num[cnt++] = cur * cur * -1;
			}
			else if (i + 1 < size && dartResult[i + 1] == '*')
			{
				if (cnt - 1 >= 0)
				{
					num[cnt - 1] *= 2;
				}
				num[cnt++] = cur * cur * 2;
			}
			else
			{
				num[cnt++] = cur * cur;
			}
		}
		else if (dartResult[i] == 'T')
		{
			if (i + 1 < size && dartResult[i + 1] == '#')
			{
				num[cnt++] = cur * cur*cur * -1;
			}
			else if (i + 1 < size && dartResult[i + 1] == '*')
			{
				if (cnt - 1 >= 0)
				{
					num[cnt - 1] *= 2;
				}
				num[cnt++] = cur * cur*cur * 2;
			}
			else
			{
				num[cnt++] = cur * cur* cur;
			}
		}
	}

	answer = num[0] + num[1] + num[2];
	return answer;
}
