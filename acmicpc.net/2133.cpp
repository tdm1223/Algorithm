// 2133. 타일 채우기
#include <iostream>

using namespace std;

int d[31];
int main()
{
	int n;
	cin >> n;

	d[0] = 1;
	d[2] = 3;
	
	for (int i = 4; i <= n; i += 2)
	{
		d[i] = 3 * d[i - 2]; //2개로 만들수 있는 모양은 3배씩 증가
		for (int j = 4; j <= i; j += 2) //4개,6개...로 만들수 있는 모양이 2개씩 있으므로 각각 2배씩하여 더함
		{
			d[i] += 2 * d[i - j];
		}
	}

	cout << d[n] << endl;
	return 0;
}
