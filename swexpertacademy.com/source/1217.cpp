// 1217. 거듭 제곱
// 2019.07.04
#include<iostream>

using namespace std;

// 거듭제곱 재귀
int Recursion(int a, int b)
{
	if (b == 1)
	{
		return a;
	}
	return a * Recursion(a, b - 1);
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		int t;
		cin >> t;
		int a, b;
		cin >> a >> b;
		cout << "#" << t << " " << Recursion(a, b) << endl;
	}
	return 0;
}
