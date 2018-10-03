// 10809. 알파벳 찾기
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int arr[26];
	int cnt = 0;
	cin >> s;

	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (int i = 0; i < s.size(); i++)
	{
		cnt = 0;
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == (char)(j + 97))
			{
				if (arr[j] > -1)// 이미 한번 나온 글자
				{
					continue;
				}
				else //처음 등장하는 인덱스 저장
				{
					arr[j] = i;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
}
