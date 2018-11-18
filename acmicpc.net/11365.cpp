// 11365. !밀비 급일
// 2018.11.18
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	while (1)
	{
		string s;
		getline(cin, s);
		if (s == "END")
		{
			break;
		}
		// 풀이1. STL 사용
		reverse(s.begin(), s.end());
		cout << s << endl;

		// 풀이2. STL 사용 X
		//for (int i = s.size() - 1; i >= 0; i--)
		//{
		//	cout << s[i];
		//}
		//cout << endl;
	}
	return 0;
}
