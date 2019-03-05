// 8983. 사냥꾼
// 2019.03.05
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

pair<int, int> animal[100001];
int gun[100001]; // 사대의 위치
int m, n, l;

// pair의 first로 오름차순 정렬하는 compare
bool compare(pair<int, int>& a, pair<int, int>&b)
{
	return a.first < b.first;
}

// 주어진 동물의 x좌표에서 가장 가까운 사대의 위치 index 반환
int FindNearest(int left, int right, int target)
{
	int mid;
	if (right == 0)
	{
		return left;
	}
	if (left > right)
	{
		if (abs(target - gun[left]) > abs(target - gun[right]))
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	mid = (left + right) / 2;
	if (gun[mid] < target)
	{
		return FindNearest(mid + 1, right, target);
	}
	else if (gun[mid] > target)
	{
		return FindNearest(left, mid - 1, target);
	}
	else
	{
		return mid;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m >> n >> l;

	for (int i = 1; i <= m; i++)
	{
		cin >> gun[i];
	}

	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		animal[i] = { x,y };
	}

	// 동물의 x좌표, 사대의 위치 오름차순 정렬
	sort(animal + 1, animal + n + 1, compare);
	sort(gun + 1, gun + m + 1);

	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int tmp = FindNearest(1, m, animal[i].first);
		// 동물을 잡을 수 있다면
		if (abs(gun[tmp] - animal[i].first) + animal[i].second <= l)
		{
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}
