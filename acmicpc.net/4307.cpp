// 4307. 개미
// 2019.05.21
// 구현
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int l, n;
		cin >> l >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		int diffMin = l; // 차이의 최솟값 저장. 막대의 길이로 초기화
		int diffMax = 0; // 차이의 최댓값 저장. 0으로 초기화
		int mid = l / 2; // 막대 길이의 중앙값
		int minTime; // 중앙에서 가장 먼 시간의 개미 위치
		int maxTime; // 중앙에서 가장 가까운 시간의 개미 위치
		for (int i = 0; i < n; i++)
		{
			int tmp = abs(mid - v[i]); // 중앙과 개미위치 차이의 절댓값을 구함
			if (diffMin > tmp) // 이 값이 최솟값이라면 갱신하고 그때의 개미 위치 저장
			{
				diffMin = tmp;
				minTime = v[i];
			}
			if (diffMax < tmp) // 이 값이 최댓값이라면 갱신하고 그때의 개미 위치 저장
			{
				diffMax = tmp;
				maxTime = v[i];
			}
		}
		// 처음-minTime, minTime-끝 중 최솟값과 처음-maxTime, maxTime-끝 중 최댓값을 출력
		cout << min(abs(l - minTime),minTime) << " " << max(abs(l - maxTime),abs(maxTime)) << endl;
	}

	return 0;
}
