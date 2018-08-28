#include <iostream>

using namespace std;

int d[1001];
int a[1001];

int main()
{
	int n;
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	//인덱스      :  0  1  2  3  4  5
	//입력값 a[i] : 10 20 10 30 20 50 
	//d[i]값      :  1  2  1  3  2  4
	for (int i = 0; i < n; i++) //전체 순회
	{
		int min = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				if (min < d[j])
					min = d[j];
			}
		}
		d[i] = min + 1;//자기 자신을 더함
		if (max < d[i])
			max = d[i];
	}
	cout << max << endl;
}