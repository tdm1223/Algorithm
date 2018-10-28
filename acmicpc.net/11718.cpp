// 11718. 그대로 출력하기
// 2018.10.28
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	while (1)
	{
		getline(cin, word);
		if (word == "")
		{
			break;
		}
		cout << word << '\n';
	}
	return 0;
}
