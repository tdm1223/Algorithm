// 11772. POT
// 2019.02.02
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		// 수의 마지막수를 끊어서 a의 b승을 더함
		int a = num / 10;
		int b = num % 10;
		ans += pow(a, b);
	}
	cout << ans << endl;
	return 0;
}
