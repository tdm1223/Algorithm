// 10816. 숫자 카드 2
// 2019.07.18
// 이분 탐색
#include<iostream>
#include<algorithm>

using namespace std;

int arr[500005];
int n;
int lowerBound(int target)
{
	int start = 0;
	int end = n;
	// start = end로 가능한 후보가 1개로 확정될 경우 while문을 탈출
	while (start < end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] >= target)
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return start;
}

int upperBound(int target)
{
	int start = 0;
	int end = n;
	// start = end로 가능한 후보가 1개로 확정될 경우 while문을 탈출
	while (start < end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] > target)
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return start;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int t;
		cin >> t;
		cout << upperBound(t) - lowerBound(t) << " ";
	}
	return 0;
}
