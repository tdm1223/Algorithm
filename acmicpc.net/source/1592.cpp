// 1592. 영식이와 친구들
// 2019.05.18
// 시뮬레이션
#include<iostream>

using namespace std;

int people[1001]; // 각 사람의 받은 횟수를 저장하는 배열
int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	int index = 1; // 공을 받은 사람의 번호
	people[1] = 1;
	index += l;
	int count = 1;
	while (1)
	{
		people[index]++;
		if (people[index] == m)
		{
			break;
		}
		count++;
		if (people[index] % 2 == 1) // 받은 횟수가 홀수
		{
			index = ((index + l) % n);
			if (index == 0)
			{
				index = n;
			}
		}
		else // 받은 횟수가 짝수
		{
			if (index - l <= 0)
			{
				index = ((index - l + n) % n);
				if (index == 0)
				{
					index = n;
				}
			}
			else
			{
				index = ((index - l) % n);
				if (index == 0)
				{
					index = n;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
