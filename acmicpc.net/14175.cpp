// 14175. The Cow-Signal
// 2019.08.15
// 문자열 처리, 영어 문제
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	// km줄 만큼 kn문자를 반복
	for (int i = 0; i < n; i++)
	{
		for (int x = 0; x < k; x++)
		{
			for (int y = 0; y < v[i].length(); y++)
			{
				for (int z = 0; z < k; z++)
				{
					cout << v[i][y];
				}
			}
			cout << endl;
		}
	}
	return 0;
}
