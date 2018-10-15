// 10707. 수도요금
// 2018.10.15
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;

	int X = A * P;
	int Y;
	if (P <= C)
	{
		Y = B;
	}
	else
	{
		Y = B + D * (P - C);
	}

	cout << min(X, Y) << endl;
	return 0;
}
