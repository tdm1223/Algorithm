// 2438. 별 찍기 - 1
// 2019.05.20
// 별 찍기
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
