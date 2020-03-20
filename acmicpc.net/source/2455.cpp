// 2455. 지능형 기차
// 2019.05.20
// 시뮬레이션
#include<iostream>

using namespace std;

int main()
{
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	int max = 1;
	int num = 0;
	int flag = -1;
	//0,2,4,8=> + / 1,3,5,7 => -
	for (int i = 0; i < 8; i++)
	{
		num += arr[i] * flag;
		flag *= -1;
		if (max < num)
		{
			max = num;
		}
	}
	cout << max;
	return 0;
}
