// 16922. 로마 숫자 만들기
// 2019.06.24
// 브루트 포스
#include<iostream>

using namespace std;

int arr[1001];
int num[4] = { 1,5,10,50 };
int n;
int ans;
// n개 고르기
void go(int x, int cnt, int start)
{
	if (cnt == n)
	{
		if (!arr[x])
		{
			arr[x] = 1;
			ans++;
		}
		return;
	}

	// 1,5,10,50순으로 진행하고 1+10이나 10+1이나 같기 때문에 0이 아닌 start부터 시작한다.
	for (int i = start; i < 4; i++)
	{
		go(x + num[i], cnt + 1, i);
	}
}
int main()
{
	cin >> n;
	go(0, 0, 0);
	cout << ans << "\n";
	return 0;
}
