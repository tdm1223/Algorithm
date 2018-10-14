// 1476. 날짜 계산
// 2018.10.14
#include<iostream>

using namespace std;

int main()
{
	int n1;
	int n2;
	int n3;
	cin >> n1 >> n2 >> n3;
	int count = 0;
	while (1)
	{
		int r1 = count % 15 + 1;
		int r2 = count % 28 + 1;
		int r3 = count % 19 + 1;
		if (r1 == n1 && r2 == n2 && r3 == n3)
		{
			break;
		}
		count++;
	}

	cout << count + 1 << endl;
	return 0;
}
