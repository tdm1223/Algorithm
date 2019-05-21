// 2979. 트럭 주차
// 2019.05.21
// 시뮬레이션
#include<iostream>

using namespace std;

int time[101];
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int answer = 0;
	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int j = a; j < b; j++)
		{
			time[j]++;
		}
	}

	for (int i = 1; i < 101; i++)
	{
		switch (time[i])
		{
		case 1:
			answer += a;
			break;
		case 2:
			answer += (2*b);
			break;
		case 3:
			answer += (3*c);
			break;
		}
	}
	cout << answer << endl;
	return 0;
}
