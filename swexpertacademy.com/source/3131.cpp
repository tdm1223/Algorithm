// 3131. 100만 이하의 모든 소수
// 2019.07.02
#include<iostream>

using namespace std;

bool a[1000001];
int main()
{
	// 미리 소수 계산
	for (int i = 2; i * i <= 1000000; i++)
	{
		if (!a[i])
		{
			for (int j = i * i; j <= 1000000; j += i)
			{
				a[j] = true;
			}
		}
	}
	// 소수 출력
	for (int i = 2; i <= 1000000; i++)
	{
		if (!a[i])
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}
