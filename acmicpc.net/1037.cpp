// 1037. 약수
#include <iostream>
#include <string>
using namespace std;

int arr[26];

int main() {

	int cnt = 0, big = 0, index;
	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] >= 65 && word[i] <= 90)
		{
			arr[word[i] - 65]++;
		}
		else if (word[i] >= 97 && word[i] <= 122)
		{
			arr[word[i] - 97]++;
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
			if (cnt >= 2)
			{
				cout << "?" << '\n';
				return 0;
			}
		}
	}
	cout << (char)(index + 65);
}
