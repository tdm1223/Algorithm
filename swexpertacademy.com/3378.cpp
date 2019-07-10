// 3378. 스타일리쉬 들여쓰기
// 2019.07.10
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++)
	{
		int p, q;
		cin >> p >> q;
		string line;
		bool rcs[21][21][21];
		for (int i = 0; i < 21; i++)
		{
			for (int j = 0; j < 21; j++)
			{
				for (int k = 0; k < 21; k++)
				{
					rcs[i][j][k] = true;
				}
			}
		}

		for (int i = 0; i < 21; i++)
		{
			for (int j = 0; j < 21; j++)
			{
				rcs[0][j][i] = rcs[j][i][0] = rcs[j][0][i] = false;
			}
		}

		int rcnt = 0, ccnt = 0, scnt = 0;
		for (int i = 0; i < p; i++)
		{
			cin >> line;
			bool init = true;
			int dot = 0;
			for (int i = 0; i < line.size(); i++)
			{
				if (init)
				{
					if (line[i] == '.')
					{
						dot++;
					}
					else
					{
						init = false;
						for (int r = 0; r < 21; r++)
						{
							for (int c = 0; c < 21; c++)
							{
								for (int s = 0; s < 21; s++)
								{
									if (r * rcnt + c * ccnt + s * scnt != dot)
									{
										rcs[r][c][s] = false;
									}
								}
							}
						}
					}
				}

				if (!init)
				{
					if (line[i] == '(')
					{
						rcnt += 1;
					}
					if (line[i] == ')')
					{
						rcnt -= 1;
					}
					if (line[i] == '{')
					{
						ccnt += 1;
					}
					if (line[i] == '}')
					{
						ccnt -= 1;
					}
					if (line[i] == '[')
					{
						scnt += 1;
					}
					if (line[i] == ']')
					{
						scnt -= 1;
					}
				}
			}
		}

		cout << "#" << test_case << " ";
		rcnt = 0, ccnt = 0, scnt = 0;
		for (int i = 0; i < q; i++)
		{
			cin >> line;
			bool init = true;
			int dot = 0;
			for (int i = 0; i < line.size(); i++)
			{
				if (init)
				{
					if (line[i] == '.')
					{
						dot++;
					}
					else
					{
						init = false;
						int result = -1;
						int tmp;
						int count = 0;
						for (int r = 0; r < 21; r++)
						{
							for (int c = 0; c < 21; c++)
							{
								for (int s = 0; s < 21; s++)
								{
									if (rcs[r][c][s] == true)
									{
										tmp = r * rcnt + c * ccnt + s * scnt;
										count++;
										if (count > 1 && result != tmp)
										{
											result = -1;
										}
										else
										{
											result = tmp;
										}
									}
								}
							}
						}
						cout << result << " ";
					}
				}
				if (!init)
				{
					if (line[i] == '(')
					{
						rcnt += 1;
					}
					if (line[i] == ')')
					{
						rcnt -= 1;
					}
					if (line[i] == '{')
					{
						ccnt += 1;
					}
					if (line[i] == '}')
					{
						ccnt -= 1;
					}
					if (line[i] == '[')
					{
						scnt += 1;
					}
					if (line[i] == ']')
					{
						scnt -= 1;
					}
				}
			}
		}
		cout << "\n";
	}
	return 0;
}
