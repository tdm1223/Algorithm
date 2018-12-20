// 14501. 퇴사
// 2018.12.20
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int t[16];
int p[16];
int d[16]; //d[i] : n-i일에 얻을 수 있는 최대 이익

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t[i] >> p[i];
	}

	//마지막날부터 첫째날까지 거꾸로 비교
	for (int i = n - 1; i > -1; i--)
	{
		if (i + t[i] > n) //범위를 초과한다면 그대로 값 유지
		{
			d[i] = d[i + 1];
		}
		else //범위 안일 경우 그 값과 이전값중 최댓값 사용
		{
			d[i] = max(d[i + 1], d[i + t[i]] + p[i]);
		}
	}

	cout << d[0] << endl;
	return 0;
}
