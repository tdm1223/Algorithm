// 1475. 방 번호
// 2018.12.03
#include<iostream>
#include<string>

using namespace std;

int num[10];//0~9까지 저장하는 배열
int main()
{
	string s;
	cin >> s;

	//각 숫자의 갯수를 구하는 과정
	for (int i = 0; i < s.size(); i++)
	{
		int cnt = s[i] - '0';
		num[cnt]++;
	}

	//6과 9는 동일 취급하므로 둘을 더하고 2로 나눔.
	num[9] += num[6];
	num[6] = 0;

	if (num[9] % 2 == 0) //더한 값이 9 일 때 2로 나눔
	{
		num[9] /= 2;
	}
	else//더한 값이 홀수 일 땐 1을 더하고 2로 나눔
	{
		num[9]++;
		num[9] /= 2;
	}

	int ans = 0;
	for (int i = 0; i < 10; i++)
	{
		if (ans < num[i])
		{
			ans = num[i];
		}
	}

	cout << ans << endl;
	return 0;
}
