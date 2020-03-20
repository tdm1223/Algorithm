// 9610. 사분면
// 2019.08.02
// 수학
#include<iostream>

using namespace std;

int q1, q2, q3, q4, axis;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		// 1사분면
		if (x > 0 && y > 0)
		{
			q1++;
		}
		// 2사분면
		else if (x < 0 && y > 0)
		{
			q2++;
		}
		// 3사분면
		else if (x < 0 && y < 0)
		{
			q3++;
		}
		// 4사분면
		else if (x > 0 && y < 0)
		{
			q4++;
		}
		// 축 위
		else
		{
			axis++;
		}
	}
	cout << "Q1: " << q1 << "\nQ2: " << q2 << "\nQ3: " << q3 << "\nQ4: " << q4 << "\nAXIS: " << axis << endl;
	return 0;
}
