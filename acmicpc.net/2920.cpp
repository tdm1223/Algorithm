// 2920. 음계
// 2019.05.21
// 배열
#include<iostream>

using namespace std;

int main()
{
	int arr[8];
	int a = 0, d = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 8; i++)
	{
		// 오름차순
		if (arr[i] == i + 1)
		{
			a++;
		}
		// 내림차순
		else if (arr[i] == 8 - i)
		{
			d++;
		}
	}
	// 결과 출력
	if (a == 8)
	{
		cout << "ascending";
	}
	else if (d == 8)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
	cout << endl;
	return 0;
}
