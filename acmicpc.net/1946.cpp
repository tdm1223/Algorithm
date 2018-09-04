// 1946. 신입 사원
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int arr[100001];
		t--;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			arr[a] = b;
		}
		int min = arr[1];
		int count = 1;
		for (int i = 2; i <= n; i++)
		{
			if (min > arr[i])
			{
				count++;
				min = arr[i];
			}
		}
		cout << count << endl;
	}
	return 0;
}
