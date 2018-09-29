// 1773. 폭죽쇼
#include <iostream>

using namespace std;

int time[2000001]; //time[i] : i시간에 폭죽이 터지면 1로 표시.
int main()
{
	int n, c;
	cin >> n >> c;

	while (n > 0)
	{
		n--;
		int k;
		cin >> k;
		for (int i = k; i <= c; i += k) //c보다 작을때와 k의 배수일때 폭죽이 터짐.
		{
			time[i] = 1;
		}
	}

	int count = 0;
	for (int i = 0; i <= c; i++)
	{
		if (time[i] == 1)
			count++;
	}

	cout << count << endl;

}
