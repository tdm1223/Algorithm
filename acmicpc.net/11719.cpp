// 11719. 그대로 출력하기 2
// 2018.12.20
#include<iostream>
#include<string>

using namespace std;
int main()
{
	string word;
	// 한줄 씩 받아서 받은걸 그대로 출력하기.
	for (int i = 0; i<100; i++)
	{
		getline(cin, word);
		cout << word << endl;
	}
	return 0;
}
