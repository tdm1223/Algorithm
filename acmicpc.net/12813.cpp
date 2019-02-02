// 12813. 이진수 연산
// 2019.02.02
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	string andAns = "";
	string orAns = "";
	string exor = "";
	string notA = "";
	string notB = "";
	for (int i = 0; i < a.size(); i++)
	{
		int x = a[i] - '0';
		int y = b[i] - '0';

		andAns += (x&y) + '0';
		orAns += (x | y) + '0';
		exor += (x^y) + '0';
		notA += (x == 1 ? '0' : '1');
		notB += (y == 1 ? '0' : '1');
	}
	cout << andAns << endl << orAns << endl << exor << endl << notA << endl << notB << endl;
	return 0;
}
