// 6321.IBM 빼기 1
// 2019.02.02
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			// 예외처리
			if (s[i] == 'Z')
			{
				s[i] = 'A';
			}
			else
			{
				s[i] += 1;
			}
		}
		cout << "String #" << i + 1 << endl;
		cout << s << endl << endl;
	}
	return 0;
}
