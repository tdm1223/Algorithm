// 2739. 구구단
// 2019.05.20
// 출력
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	// n단 출력
	for (int i = 1; i < 10; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
	return 0;
}
