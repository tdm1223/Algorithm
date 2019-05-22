// 10988. 팰린드롬인지 확인하기
// 2019.05.22
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int ans=1;
	// 팰린드롬인지 확인한다.
	for (int i = 0; i < word.size() / 2; i++)
	{
		if (word[i] != word[word.size()-i-1])
		{
			ans = 0;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
