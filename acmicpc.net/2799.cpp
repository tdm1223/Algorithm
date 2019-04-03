// 2799. 블라인드
// 2019.04.03
#include<iostream>
#include<string>

using namespace std;
string s[502];
int ans[6];
int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < 5 * m + 1; i++)
	{
		cin >> s[i];
	}
	for (int i = 1; i < 5 * m + 1; i += 5)
	{
		for (int j = 1; j < 5 * n + 1; j += 5)
		{
			int count = 0;
			for (int k = 0; k < 4; k++)
			{
				// 블라인드가 몇칸 채워져있는지 확인
				if (s[i + k][j] == '*')
				{
					count++;
				}
			}
			ans[count]++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << ans[i] << " ";
	}
	cout << "\n";
	return 0;
}
