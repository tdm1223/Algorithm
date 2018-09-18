// 2863. 이게 분수?
#include <iostream>
#include<vector>
using namespace std;

float max(float a, float b)
{
	return a > b ? a : b;
}
float arr[4];
int main()
{
	float A, B, C, D;
	cin >> A >> B >> C >> D;

	arr[0] = A / C + B / D;
	arr[1] = C / D + A / B;
	arr[2] = D / B + C / A;
	arr[3] = B / A + D / C;

	int count;
	float m = max(max(arr[0], arr[1]), max(arr[2], arr[3]));
	for (int i = 0; i < 4; i++)
	{
		if (m == arr[i])
		{
			count = i;
			break;
		}
	}
	cout << count << endl;
	return 0;
}
