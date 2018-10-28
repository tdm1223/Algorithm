// 11719. 그대로 출력하기 2
// 2018.10.28
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	for (int i = 0; i<100; i++)
	{
		getline(cin, word);
		cout << word << endl;
	}
	return 0;
}
