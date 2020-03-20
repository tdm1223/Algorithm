// 10871. X보다 작은 수
// 2019.05.22
// 구현
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	// x보다 작은 수 출력
	for (int i = 0; i < n; i++)
	{
		if (v[i] < x)
		{
			cout << v[i] << " ";
		}
	}
	cout << endl;
	return 0;
}
