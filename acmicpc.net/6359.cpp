// 6359. 만취한 상범
#include <iostream>

using namespace std;

int d[101]; //0 : 닫힘 1 : 열림
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n, count = 0;
		cin >> n;
		for (int i = 0; i <= 101; i++)
		{
			d[i] = 0;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j+=i)
			{
				if (d[j] == 0)
				{
					d[j] = 1;
					count++;
				}
				else
				{
					d[j] = 0;
					count--;
				}
			}

		}

		cout << count << endl;
	}


	return 0;
}
