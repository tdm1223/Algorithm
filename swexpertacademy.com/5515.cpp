// 5515. 2016년 요일 맞추기
// 2019.08.15
#include<iostream>

using namespace std;

int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int start = 3; // 1월1일이 금요일이므로 시작을 3으로 설정
int main()
{

	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int m, d;
		cin >> m >> d;

		int day = start;
		for (int i = 0; i < m - 1; i++)
		{
			day += month[i];
		}
		day += d;
		cout << "#" << testCase << " " << day % 7 << endl;
	}
	return 0;
}
