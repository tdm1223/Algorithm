// 10797. 10부제
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int a[5];
int main()
{
	int n;
	cin >> n;
	int count = 0;
	// 배열의 값 중 n과 같은 수의 개수가 정답
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (a[i] == n)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
