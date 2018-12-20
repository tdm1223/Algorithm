// 11720. 숫자의 합
// 2018.12.20
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	// 입력이 공백 없이 받으므로 string을 받은 후 int로 변환
	string s;

	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		sum += s[i] - '0';
	}
	cout << sum << endl;
	return 0;
}
