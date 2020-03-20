// 10707. 수도요금
// 2019.05.22
// 구현
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
	// 두가지 경우중 최솟값 출력
	cout << min(X, Y) << endl;
	return 0;
}
