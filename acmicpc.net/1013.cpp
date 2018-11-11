// 1013. Contact
// 2018.11.11
#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main()
{
	//정규식
	regex regex("(100+1+|01)+");
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		string s;
		cin >> s;
		if (regex_match(s, regex))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
