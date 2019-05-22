// 15961. 회전 초밥
// 2019.05.22
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int eat[3003001]; // eat[i] : i번인 초밥을 먹으면 +1
int sushi[3003001]; // sushi[i] : i번째 초밥의 번호
int main()
{
	int n, d, k, coupon;
	scanf("%d %d %d %d", &n, &d, &k, &coupon);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &sushi[i]);
	}
	for (int i = 0; i < k - 1; i++)
	{
		sushi[i + n] = sushi[i];
	}

	int cnt = 0; // 각 상황에 먹은 초밥의 종류의 개수
	int left = 0; // 연속해서 먹는 초밥의 가장 왼쪽 인덱스
	int right = k - 1; // 연속해서 먹는 초밥의 가장 오른쪽 인덱스
	eat[coupon]++; // 쿠폰은 무조건 먹음
	cnt++; // 쿠폰에 대한 cnt 증가

	// 초기설정
	for (int i = left; i <= right; i++)
	{
		if (eat[sushi[i]] == 0)
		{
			cnt++;
		}
		eat[sushi[i]]++;
	}
	int ans = cnt;

	for (int i = 0; i < n - 1; i++)
	{
		// 가장 왼쪽을 빼고 왼쪽칸 이동
		eat[sushi[left]]--;
		if (eat[sushi[left]] == 0)
		{
			cnt--;
		}
		left++;

		// 가장 오른쪽 칸을 더하고 오른쪽칸 값 더함
		right++;
		if (eat[sushi[right]] == 0)
		{
			cnt++;
		}
		eat[sushi[right]]++;
		ans = max(ans, cnt);
	}

	printf("%d\n", ans);
	return 0;
}
