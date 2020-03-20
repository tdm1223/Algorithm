// 1138. 한 줄로 서기
// 2019.05.14
// 그리디 알고리즘
#include<iostream>

using namespace std;

int line[10];
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		// 왼쪽에 몇명있는지 입력
		int num;
		cin >> num;

		// 줄을 순회
		for (int j = 0; j < n; j++)
		{
			// 자기보다 키 큰 사람을 다 지나치고 line[j]가 비었을 때
			if (num == 0 && line[j] == 0)
			{
				line[j] = i + 1;
				break;
			}
			else if (line[j] == 0)
			{
				num--;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << line[i] << " ";
	}
	cout << endl;
	return 0;
}
