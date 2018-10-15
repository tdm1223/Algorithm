// 1965. 상자넣기
// 2018.10.15
#include <iostream>

using namespace std;

int a[1001];
int d[1001]; // d[i] : i번째 까지 증가하는 수의 갯수
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int max = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i] && d[i] <= d[j])
			{
					d[i] = d[j] + 1;
					if(max<d[i])
					{
						max = d[i];
					}
			}
		}
	}

	cout << max+1 << endl;
	return 0;
}
