// 15720. 카우버거
// 2019.09.29
// 그리디 알고리즘
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int b, c, d;
	cin >> b >> c >> d;
	vector<int> burgers(b);
	vector<int> sides(c);
	vector<int> beverages(d);
	int sum = 0;
	for (int i = 0; i < b; i++)
	{
		cin >> burgers[i];
		sum += burgers[i];
	}
	for (int i = 0; i < c; i++)
	{
		cin >> sides[i];
		sum += sides[i];
	}
	for (int i = 0; i < d; i++)
	{
		cin >> beverages[i];
		sum += beverages[i];
	}

	// 할인 최솟값 구하기
	sort(burgers.begin(), burgers.end(), greater<int>());
	sort(sides.begin(), sides.end(), greater<int>());
	sort(beverages.begin(), beverages.end(), greater<int>());
	int minSize = min(min(burgers.size(), sides.size()), beverages.size());
	int sum2 = 0;
	for (int i = 0; i < minSize; i++)
	{
		sum2 += (burgers[i] + sides[i] + beverages[i])*0.9;
	}
	for (int i = minSize; i < burgers.size(); i++)
	{
		sum2 += burgers[i];
	}
	for (int i = minSize; i < sides.size(); i++)
	{
		sum2 += sides[i];
	}
	for (int i = minSize; i < beverages.size(); i++)
	{
		sum2 += beverages[i];
	}
	cout << sum << "\n" << sum2 << "\n";
	return 0;
}
