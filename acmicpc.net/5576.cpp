// 5576. 콘테스트
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	vector<int> w(10);//w대학 점수
	vector<int> k(10);//k대학 점수
	for (int i = 0; i < 10; i++)
	{
		cin >> w[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> k[i];
	}

	sort(w.begin(), w.end());
	sort(k.begin(), k.end());

	int sum1 = 0;//w대학의 합
	int sum2 = 0;//k대학의 합
	for (int i = 7; i < 10; i++)
	{
		sum1 += w[i];
		sum2 += k[i];
	}

	cout << sum1 << " " << sum2;
	return 0;
}
