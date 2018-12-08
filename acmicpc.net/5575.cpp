// 5575. 타임 카드
// 2018.12.08
#include<iostream>

using namespace std;

int main()
{
	int h1, h2, m1, m2, s1, s2;
	for (int i = 0; i < 3; i++)
	{
		// 출퇴근 시간 입력받음
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		// 초->분->시간 순을 ㅗ차례대로 처리한다.
		int s = s2 - s1;
		if (s < 0)
		{
			m2--;
			s += 60;
			if (m2 < 0)
			{
				h2--;
				m2 += 60;
			}
		}
		int m = m2 - m1;
		if (m < 0)
		{
			h2--;
			m += 60;
		}
		int h = h2 - h1;
		cout << h << " " << m << " " << s << endl;
	}
	return 0;
}
