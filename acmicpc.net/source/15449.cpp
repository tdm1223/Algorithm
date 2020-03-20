// 15449. Art
// 2019.09.23
// 수학, 영어 문제
#include<iostream>
#include<algorithm>

using namespace std;

int arr[5];
int num[5];
int visit[5];
int ans;
void go(int cnt, int start)
{
	// 세변 모두 선택 완료
	if (cnt == 3)
	{
		// 삼각형 성립 조건 확인
		if (arr[num[0]] + arr[num[1]] > arr[num[2]])
		{
			ans++;
		}
		return;
	}

	for (int i = start; i < 5; i++)
	{
		if (!visit[i])
		{
			visit[i] = 1;
			num[cnt] = i;
			go(cnt + 1, i + 1);
			visit[i] = 0;
		}
	}
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 5);
	go(0, 0);
	cout << ans << endl;
	return 0;
}
