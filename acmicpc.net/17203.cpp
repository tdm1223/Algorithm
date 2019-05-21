// 17203. ∑|ΔEasyMAX|
// 2019.05.21
// 수학
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int song[1001];
int main()
{
	int n, q;
	cin >> n >> q;
  // 노래 길이 입력
	for (int i = 0; i < n; i++)
	{
		cin >> song[i];
	}
	for (int j = 0; j < q; j++)
	{
		int first, end;
		cin >> first >> end;
    // 초당 박자 변화량의 합을 구함
		int ans = 0;
		for (int k = first; k < end; k++)
		{
			ans += abs(song[k] - song[k-1]);
		}
		cout << ans << endl;
	}
	return 0;
}
