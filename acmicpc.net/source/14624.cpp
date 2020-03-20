// 14624. 전북대학교
// 2019.08.07
// 출력
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// 짝수 일때
	if (n % 2 == 0)
	{
		cout << "I LOVE CBNU" << endl;
	}
	// 홀수 일때
	else
	{
		// 맨 위의 줄 출력
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		cout << endl;

		// 두번째 줄 출력
		for (int i = 0; i < n / 2; i++)
		{
			cout << " ";
		}
		cout << "*" << endl;

		// 나머지 줄 출력
		int k = 1;
		for (int i = n / 2 - 1; i >= 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < k; j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
			k += 2;
		}
	}
	return 0;
}
