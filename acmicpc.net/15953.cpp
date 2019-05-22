// 15953. 상금 헌터
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int aReward[7] = { 0,5000000,3000000,2000000,500000,300000,100000 }; // 1회 보상
int bReward[6] = { 0,5120000,2560000,1280000,640000,320000 }; // 2회 보상
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int a, b; // 등수 입력
		cin >> a >> b;
		int ans = 0;

		int aCnt = 1;
		if (a != 0) // 0일땐 무시
		{
			while (1)
			{
				a -= aCnt;
				if (a <= 0) // 상금 획득
				{
					ans += aReward[aCnt];
					break;
				}
				aCnt++;
				if (aCnt == 7) // 무관
				{
					break;
				}
			}
		}

		int bCnt = 1;
		int cnt = 1; // b의 인원수를 계산하는 변수
		if (b != 0) // 0일땐 무시
		{
			while (1)
			{
				b -= bCnt;
				if (b <= 0) // 상금 획득
				{
					ans += bReward[cnt];
					break;
				}
				bCnt *= 2;
				cnt++;
				if (cnt == 6) // 무관
				{
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
