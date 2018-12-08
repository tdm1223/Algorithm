// 10709. 기상캐스터
// 2018.12.08
#include<iostream>
#include<string>

using namespace std;

int map[101][101];
int main()
{
	int h, w;
	cin >> h >> w;
	// 초기화
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			map[i][j] = -1;
		}
	}
	for (int i = 0; i < h; i++)
	{
		string s;
		cin >> s;
		int count = 0;
		bool flag = false; // 구름이 나온지 안나온지 유무에 대한 플래그
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'c')
			{
				count = 0; // count 초기화
				map[i][j] = 0;
				flag = true; // 구름이 등장함
				count++;
			}
			else if (flag)
			{
				map[i][j] = count;
				count++;
			}
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
