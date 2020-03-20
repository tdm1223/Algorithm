// 10973. 이전 순열
// 2019.05.22
// 수학
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	// 이전 순열 구하기
	if (prev_permutation(v.begin(), v.end()))
	{
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	// 이전 순열이 없을 때
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}
