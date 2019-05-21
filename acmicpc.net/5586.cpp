// 5586. JOI와 IOI
// 2019.05.21
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

char joi[3] = { 'J','O','I' };
char ioi[3] = { 'I','O','I' };
int main()
{
	string s;
	cin >> s;

	int joiCount = 0;
	int ioiCount = 0;
	for (int i = 0; i < s.size() - 2; i++)
	{
		bool joiFlag = true;
		bool ioiFlag = true;
		int cnt = i;
		// 문자열 3개를 joi,ioi와 각각 비교하여 틀리면 flag를 false로 바꾼다.
		for (int j = 0; j < 3; j++)
		{
			if (s[cnt] != joi[j])
			{
				joiFlag = false;
			}
			if (s[cnt] != ioi[j])
			{
				ioiFlag = false;
			}
			cnt++;
		}
		if (joiFlag)
		{
			joiCount++;
		}
		if (ioiFlag)
		{
			ioiCount++;
		}
	}
	cout << joiCount << endl << ioiCount << endl;
	return 0;
}
