// 1267. 핸드폰 요금
// 2018.12.03
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum1 = 0; //영식 요금제
	int sum2 = 0; //민식 요금제
	for (int i = 0; i < n; i++)
	{
		int time;
		cin >> time;
		sum1 += ((time / 30) + 1) * 10;
		sum2 += ((time / 60) + 1) * 15;
	}

	if (sum1 < sum2)
	{
		cout << "Y " << sum1 << endl;
	}
	else if (sum1 > sum2)
	{
		cout << "M " << sum2 << endl;
	}
	else//문제에서 같은값에 대한 출력방식이 애매모호하다.
	{
		cout << "Y M " << sum2 << endl;
	}

	return 0;
}
