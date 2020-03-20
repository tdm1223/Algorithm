// 4047. 영준이의 카드 카운팅
// 2019.07.01
#include<iostream>
#include<string>

using namespace std;

int s[14];
int d[14];
int h[14];
int c[14];
int sCnt;
int dCnt;
int hCnt;
int cCnt;
void cal()
{
	for (int i = 1; i <= 13; i++)
	{
		if (s[i] == 1)
		{
			sCnt++;
		}
		if (c[i] == 1)
		{
			cCnt++;
		}
		if (h[i] == 1)
		{
			hCnt++;
		}
		if (d[i] == 1)
		{
			dCnt++;
		}
	}
}
int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		fill(s, s + 14, 0);
		fill(d, d + 14, 0);
		fill(h, h + 14, 0);
		fill(c, c + 14, 0);
		sCnt = 0;
		dCnt = 0;
		hCnt = 0;
		cCnt = 0;

		string str;
		cin >> str;
		bool flag = true;
		for (int i = 0; i < str.size(); i += 3)
		{
			string tmp = str.substr(i, 3);
			int k = 0;
			switch (tmp[0])
			{
			case 'S':
				k = stoi(tmp.substr(1, 2));
				if (s[k] == 1)
				{
					flag = false;
				}
				else
				{
					s[k]++;
				}
				break;
			case 'D':
				k = stoi(tmp.substr(1, 2));
				if (d[k] == 1)
				{
					flag = false;
				}
				else
				{
					d[k]++;
				}
				break;
			case 'H':
				k = stoi(tmp.substr(1, 2));
				if (h[k] == 1)
				{
					flag = false;
				}
				else
				{
					h[k]++;
				}
				break;
			case 'C':
				k = stoi(tmp.substr(1, 2));
				if (c[k] == 1)
				{
					flag = false;
				}
				else
				{
					c[k]++;
				}
				break;
			}
		}
		cal();
		if (flag)
		{
			cout << "#" << test_case << " " << 13 - sCnt << " " << 13 - dCnt << " " << 13 - hCnt << " " << 13 - cCnt << endl;
		}
		else
		{
			cout << "#" << test_case << " " << "ERROR" << endl;
		}
	}
	return 0;
}
