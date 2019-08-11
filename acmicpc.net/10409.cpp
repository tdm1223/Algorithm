// 10409. 서버
// 2019.05.22
// 구현
// https://tdm1223.tistory.com/100
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int ans = 0;
	// FCFS(FIFO)
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] <= t)
		{
			ans++;
		}
		t -= v[i];
	}
	cout << ans << endl;
	return 0;
}
