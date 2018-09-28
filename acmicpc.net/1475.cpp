// 1475. 방 번호
#include <iostream>
#include <string>

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

	num[9] += num[6];
	num[6] = 0;

	if (num[9] % 2 == 0)
	{
		num[9] /= 2;
	}
	else
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
