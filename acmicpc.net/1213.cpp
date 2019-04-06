// 1213. 팰린드롬 만들기
// 2019.04.05
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

int arr[26];
int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		arr[s[i] - 'A']++;
	}

	int odd = -1;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] % 2 == 1 && odd != -1)
		{
			cout << "I'm Sorry Hansoo" << endl;
			return 0;
		}
		else if (arr[i] % 2 == 1 && odd==-1)
		{
			odd = i;
		}

	}

	deque<char> dq;
	if (odd != -1)
	{
		dq.push_back(odd + 'A');
		arr[odd]--;
	}
	for (int i = 25; i >= 0; i--)
	{
		while (arr[i] > 0)
		{
			dq.push_back(i + 'A');
			dq.push_front(i + 'A');
			arr[i] -= 2;
		}
	}
	for (int i = 0; i < dq.size(); i++)
	{
		cout << dq[i];
	}
	cout << endl;
	return 0;
}
