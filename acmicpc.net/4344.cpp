// 4344. 평균은 넘겠지
// 2019.05.21
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int caseNum[1001];
int main()
{
	long double n, sum = 0, cnt = 0, average;
	int k;
	cin >> n;
	long double per;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> caseNum[j];
			sum += caseNum[j];
		}
		average = sum / k; // 각 케이스의 평균을 저장
		for (int t = 0; t < k; t++)
		{
			if (caseNum[t] > average)// 각 케이스의 점수가 평균을 넘는지 확인
			{
				cnt++;
				continue;
			}
		}
		per = (cnt / k) * 100;
		cout << fixed;
		cout.precision(3);
		cout << per << "%" << '\n'; // 소수점 넷째짜리에서 반올림한 후 셋째짜리까지만 출력
		sum = 0;
		cnt = 0;
		average = 0;
	}
	return 0;
}
