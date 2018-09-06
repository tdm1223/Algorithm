// 10809. 알파벳 찾기
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	string S;
	int arr[26], cnt = 0;
	getline(cin, S);

	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	for (int i = 0; i < S.size(); i++)
	{
		cnt = 0;
		for (int j = 0; j < 26; j++)
		{
			if (S[i] == (char)(j + 97))
			{
				if (arr[j] > -1)
					continue;
				else
					arr[j] = i;
			}
		}
	}

	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
}
