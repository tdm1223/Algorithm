// 10808. 알파벳 개수
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int arr[26];

int main() {
	string word;
	getline(cin, word);

	for (int i = 0; i < word.size(); i++)
	{
		arr[word[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		cout << arr[i] <<" ";

	return 0;
}
