// 11098. 첼시를 도와줘!
// 2019.09.07
// 정렬
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		vector<pair<int, string>> v(n);
		for (int i = 0; i < n; i++)
		{
			int price;
			string name;
			cin >> v[i].first >> v[i].second;
		}

		sort(v.begin(), v.end()); // 자동으로 첫번째 요소로 오름차순 정렬이 된다.
		cout << v[n-1].second << endl;
	}
	return 0;
}
