// 2953. 나는 요리사다
// 2019.05.21
// 배열
#include<iostream>
#include<algorithm>

using namespace std;

int arr[5][4];
int sum[5];
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
			sum[i] += arr[i][j];
		}
	}
	int max = 1; // 우승자 점수
	int cnt = 0; // 우승자 번호
	// 우승자 찾기
	for (int i = 0; i < 5; i++)
	{
		if (max < sum[i])
		{
			max = sum[i];
			cnt = i;
		}
	}

	// 우승자의 번호와 점수
	cout << cnt + 1 << " " << max << endl;
	return 0;
}
