// 11509. 풍선 맞추기
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int h[1000001]; // 화살 높이
int main()
{
	int n;
	cin >> n;
	int height;
	int answer = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> height;
		if (h[height + 1] == 0) // height+1에서 날아오는 화살이 없을 경우
		{
			answer++; // 화살 갯수 증가
			h[height]++; // height에서 날아오는 화살 추가
		}
		else
		{
			// 화살의 높이 감소
			h[height + 1]--;
			h[height]++;
		}
	}
	// 결과 출력
	cout << answer << endl;
	return 0;
}
