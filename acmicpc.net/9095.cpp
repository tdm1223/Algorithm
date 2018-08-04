#include<iostream>
#include<string>
using namespace std;
int d[11];

int main()
{
	int n,k;
	cin >> n;
	
	while (n > 0)
	{
		n--;
		cin >> k;
		d[0] = 1;
		d[1] = 1;
		d[2] = 2;
		
		for (int i = 3; i <= k; i++)
		{
			d[i] = d[i - 1] + d[i - 2]+d[i-3];
		}
		cout << d[k] << endl;
	}
	return 0;
}