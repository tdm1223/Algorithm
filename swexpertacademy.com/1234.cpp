// 1234. 비밀번호
// 2019.07.03
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		int n;
		string k;
		string ans;
		cin >> n >> k;
		while (1)
		{
			int cnt = 0;
			// 같은 번호로 붙어있는 쌍들을 소거
			for (int j = 0; j < n - 1; j++)
			{
				if (k[j] == k[j + 1])
				{
					k[j] = ' ';
					k[j + 1] = ' ';
					k.erase(remove(k.begin(), k.end(), ' '), k.end());
					cnt++;
				}
			}
			// 소거된게 없다면 종료
			if (cnt == 0)
			{
				break;
			}
		}
		cout << "#" << i << " " << k << endl;
	}
	return 0;
}
