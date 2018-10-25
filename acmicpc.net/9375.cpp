// 9375. 패션왕 신해빈
// 2018.10.25
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
		map<string, int> m;
		map<string, int>::iterator iter;
		for (int i = 0; i < n; i++)
		{
			string a, b;
			cin >> a >> b;
			if (m.find(b) != m.end())
			{
				m[b]++;
			}
			else
			{
				m[b] = 1;
			}
		}

		if (m.size() == 1)
		{
			answer = n;
		}
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
