// 2576. 홀수
// 2019.09.03
// 입문용
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v(7);
	int sum = 0;
	int min = 101;
	for (int i = 0; i < 7; i++)
	{
		cin>>v[i];
		if (v[i] % 2 == 1)
		{
			sum += v[i];
			min = min > v[i] ? v[i] : min;
		}
	}
	if (min == 101)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << sum << endl << min << endl;
	}
	return 0;
}
