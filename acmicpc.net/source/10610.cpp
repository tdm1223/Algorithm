// 10610. 30
// 2019.05.22
// 그리디 알고리즘
#include<iostream>
#include<string>

using namespace std;

int num[10]; // 0~9의 개수를 저장하기 위한 배열
int main()
{
	string s;
	cin >> s;

	int sum = 0;
	for (int i = 0; i<s.length(); i++)
	{
		sum += (s[i] - '0');
		num[s[i] - '0']++;
	}
	// 30의 배수의 조건 : 각 자릿수의 합이 3의 배수이고 마지막이 0인 수

	// 0의 개수가 0개이거나 각 자릿수의 합이 3으로 나누어 떨어지지않으면 존재하지 않음.
	if (num[0] == 0 || sum % 3 != 0)
	{
		cout << -1;
	}
	else
	{
		// 9부터 0까지 num 배열에 저장되어있는 수만큼 출력한다.
		for (int i = 9; i >= 0; i--)
		{
			for (int j = 0; j < num[i]; j++)
			{
				cout << i;
			}
		}
	}
	cout << endl;
	return 0;
}
