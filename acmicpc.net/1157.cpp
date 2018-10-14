// 1157. 단어 공부
// 2018.10.14
#include <iostream>
#include <string>

using namespace std;

int arr[26];//a~z의 개수 저장(대소문자 구분 없이)
int main()
{
	int cnt = 0, big = 0, index;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90) //소문자
		{
			arr[s[i] - 65]++;
		}
		else if (s[i] >= 97 && s[i] <= 122) //대문자
		{
			arr[s[i] - 97]++;
		}
	}

	//가장 많이 사용된 알파벳을 구하기
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > big)
		{
			big = arr[i];
			index = i;
		}
	}

	//가장 많이 사용된 알파벳이 여러개 인지 확인하기
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
	{
		cout << "?" << endl;
	}
	else
	{
		cout << char(index + 65) << endl;
	}
	return 0;
}
