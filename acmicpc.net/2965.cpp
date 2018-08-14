#include <iostream>

using namespace std;

int main() 
{
	//캥거루 3마리 사이의 구간중 큰 값 -1을 구한다.
	int A, B, C;
	cin >> A >> B >> C;
	if (C - B > B - A)
	{
		cout << C - B - 1;
	}
	else
	{
		cout << B - A - 1;
	}

	return 0;
}