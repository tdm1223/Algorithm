// 1157. 단어 공부
#include <iostream>
#include <string>
int arr[26];
using namespace std;
int main()
{
	int cnt = 0, big = 0, index;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			arr[s[i] - 65]++;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			arr[s[i] - 97]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > big)
		{
			big = arr[i];
			index = i;
		}

	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == big)
		{
			cnt++;
			if (cnt == 2)
			{
				break;
			}
		}
	}

	if (cnt == 2)
		cout << "?" << endl;
	else
		cout << char(index + 65) << endl;
}
