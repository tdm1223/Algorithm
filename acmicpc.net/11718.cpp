// 11718. 그대로 출력하기
// 2018.12.20
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word;
	while (1)
	{
		// 한줄 씩 받아서 그대로 출력하기.
		getline(cin, word);
		if (word == "")
		{
			break;
		}
		cout << word << '\n';
	}
	return 0;
}
