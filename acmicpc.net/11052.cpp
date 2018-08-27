#include <iostream>
using namespace std;


int max(int a, int b)
{
	return a > b ? a : b;
}

int d[1001] = { 0 }; //d[i] : 붕어빵이 i개 있을때 최대 수익
int a[1001]; //a[i] : i개 팔 때의 가격

int main() 
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			d[i] = max(d[i], d[i - j] + a[j]);
		}
	}
	
	cout << d[n] << endl;
}