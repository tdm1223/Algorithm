// 10808. 알파벳 개수
#include<iostream>
#include<string>

using namespace std;

int arr[26];//a~z를 담는 배열

int main()
{
	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		arr[word[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
