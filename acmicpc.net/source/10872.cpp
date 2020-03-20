// 10872. 팩토리얼
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int result = 1;
	// 팩토리얼을 구함
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	// 결과 출력
	cout << result << endl;
	return 0;
}
