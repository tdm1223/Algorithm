// 11047. 동전 0
// 2019.05.22
// 그리디 알고리즘
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	int k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int count = 0;
	// 가장 값어치가 큰 동전부터 빼가면서 갯수를 더함
	for (int i = v.size() - 1; i >= 0; i--)
	{
		while (k >= v[i])
		{
			k -= v[i];
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
