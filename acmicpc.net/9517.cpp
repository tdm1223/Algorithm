// 9517. 아이 러브 크로아티아
// 2018.12.02
#include<iostream>

using namespace std;

int main()
{
	int time = 210; // 210초후 폭발

	int k, n;
	cin >> k >> n;
	for (int i = 0; i < n; i++)
	{
		int t;
		char type;
		cin >> t >> type;
		time -= t;
		// 폭발할경우 폭탄을 들고있는 사람의 번호 출력
		if (time <= 0)
		{
			cout << k << endl;
			break;
		}
		// 문제를 맞춘 경우에만 다음 사람으로 폭탄을 넘긴다.
		if (type == 'T')
		{
			k = (k + 1) % 8;
			if (k == 0)
			{
				k = 8;
			}
		}
	}
	return 0;
}
