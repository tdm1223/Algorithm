#include <iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	deque<long long> dq;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		dq.push_back(temp);
	}

	while (m > 0)
	{
		m--;
		sort(dq.begin(), dq.end());

		long long first = dq.front();
		dq.pop_front();
		long long second = dq.front();
		dq.pop_front();

		long long sum = first + second;
		dq.push_back(sum);
		dq.push_back(sum);
		
	}

	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += dq[i];
	}
	cout << ans << endl;
	return 0;
}