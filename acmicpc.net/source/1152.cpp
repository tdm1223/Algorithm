// 1152. 단어의 개수
// 2019.05.14
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

// sstream을 활용한 풀이
int main()
{
	int num = 0;
	string s;
	getline(cin, s);

	stringstream ss;
	ss.str(s);

	while (ss >> s)
	{
		num++;
	}

	cout << num << endl;
	return 0;
}

/*
//그냥 풀이
int main()
{
	int num = 0;
	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			num++;
		}
	}

	if (s[0] == ' ') //처음이 공백
	{
		num--;
	}

	if (s[s.size() - 1] == ' ') //마지막이 공백
	{
		num--;
	}

	cout << num + 1 << endl;
	return 0;
}
*/
