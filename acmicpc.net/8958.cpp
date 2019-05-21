// 8958. OX퀴즈
// 2019.05.21
// 구현
#include<iostream>
#include<string>

using namespace std;

int arr[81];
int main()
{
	int num;
	int cnt = 0;
	int total = 0;
	string k;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> k;
		for (int j = 0; j < k.size(); j++)
		{
			// 문제를 맞추면 cnt에 1을 더하고 점수에 cnt를 더함
			if (k[j] == 'O')
			{
				cnt++;
				total += cnt;
			}
			// 문제를 틀리면 cnt 초기화
			else if (k[j] == 'X')
			{
				cnt = 0;
			}
		}
		arr[i] = total;
		total = 0;
		cnt = 0;
	}
	// 결과 출력
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << '\n';
	}
	return 0;
}
