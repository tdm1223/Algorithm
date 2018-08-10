#include <iostream>
using namespace std;
int min(int a, int b) 
{
	return a > b ? b : a;
}
int main() {
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;

	int X = A * P;
	int Y;
	if (P <= C)
	{
		Y = B;
	}
	else {
		Y = B + D * (P - C);
	}

	cout << min(X, Y);

}
