// 2675. 문자열 반복
// 2018.10.15
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int count;
		cin >> count;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = 0; j < count; j++)
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
}
