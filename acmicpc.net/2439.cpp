// 2439. 별 찍기 - 2
// 2019.05.20
// 별 찍기
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = i; j >0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
