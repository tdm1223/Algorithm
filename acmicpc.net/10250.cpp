// 10250. ACM 호텔
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;

		int h, w, n;
		cin >> h >> w >> n;
		//제일 윗층에 배정받을 차례일때 나누어 떨어져 0층이 되거나
		//방번호가 1씩 증가하기 때문에 나누어 떨어질 경우만 따로 처리
		int height = n % h == 0 ? h : n % h;
		int weight = n % h == 0 ? n / h : n / h + 1;
		if (weight > 0 && weight < 10)
		{
			cout << height << 0 << weight << endl;
		}
		else
		{
			cout << height << weight << endl;
		}
	}
	return 0;
}
