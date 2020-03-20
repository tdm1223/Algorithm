// 1546. 평균
// 2019.05.18
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int score[1000];
int k = 0; // 최고점수
int n;
double sum;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
		k = max(score[i], k);
	}
	for (int i = 0; i < n; i++)
	{

		sum += (double)score[i] / (double)k * 100.0;
	}
	printf("%.2lf", sum / (double)n);
	return 0;
}
