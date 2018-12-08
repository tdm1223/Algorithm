// 2352. 반도체 설계
// 분류 : LIS, 그리디 알고리즘, Dynamic Programming
// 2018.12.08
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[40001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// LIS를 nlogn의 시간복잡도로 구한다.
	vector<int> v;
	v.push_back(a[0]);
	for (int i = 1; i < n; i++)
	{
		if (v.back() < a[i])
		{
			v.push_back(a[i]);
		}
		else
		{
			// a[i]보다 크거나 같은 값이 처음으로 나타내는 위치를 찾아서 a[i]로 갱신
			auto it = lower_bound(v.begin(), v.end(), a[i]);
			*it = a[i];
		}
	}

	cout << v.size() << endl;
	return 0;
}
