// 9375. 패션왕 신해빈
// 2019.05.22
// 자료구조
#include<string>
#include<map>
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		int answer = 0;
		map<string, int> m; // 맵
		map<string, int>::iterator iter; // 반복자
		for (int i = 0; i < n; i++)
		{
			string a, b;
			cin >> a >> b;
			// 이미 있다면 개수 +1
			if (m.find(b) != m.end())
			{
				m[b]++;
			}
			// 없다면 1로 추가
			else
			{
				m[b] = 1;
			}
		}
		// 종류가 1가지면 n가지가 정답
		if (m.size() == 1)
		{
			answer = n;
		}
		// 종류가 1가지가 아니면 +1결과를 서로 곱해줌
		else
		{
			answer = 1;
			for (auto i = m.begin(); i != m.end(); i++)
			{
				answer *= (i->second + 1);
			}
			answer--;
		}
		cout << answer << endl;
	}
	return 0;
}
