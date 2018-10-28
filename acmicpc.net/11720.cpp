// 11720. 숫자의 합
// 2018.10.28
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	string s;

	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		sum += s[i] - '0';
	}
	cout << sum << endl;
	return 0;
}
