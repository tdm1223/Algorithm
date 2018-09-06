// 1152.단어의 개수
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = 0;
	string s = {};
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
			num++;

	}
	if (s[0] == ' ') //처음이 공백
	{
		num = num - 1;
	}
	if (s[s.size() - 1] == ' ') //마지막이 공백
	{
		num = num - 1;
	}

	cout << num + 1 << endl;
}
