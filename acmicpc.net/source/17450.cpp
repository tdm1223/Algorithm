// 17450. 과자 사기
// 2019.11.02
// 입문용
#include<iostream>

using namespace std;

struct snack
{
	int p;
	int w;
	char name;
};
snack snacks[3];
int main()
{
	snacks[0].name = 'S';
	snacks[1].name = 'N';
	snacks[2].name = 'U';

	for (int i = 0; i < 3; i++)
	{
		cin >> snacks[i].p >> snacks[i].w;
	}

	char ans;
	float max = -1;
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		sum += snacks[i].p * 10;
		if (sum >= 5000)
		{
			sum -= 500;
		}
		int weight = snacks[i].w * 10;
		sum = weight / sum;
		if (sum > max)
		{
			max = sum;
			ans = snacks[i].name;
		}
	}
	cout << ans << endl;
	return 0;
}
