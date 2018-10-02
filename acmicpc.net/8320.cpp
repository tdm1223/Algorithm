// 8320. 직사각형을 만드는 방법
#include <iostream>

using namespace std;

int main()
{
	int n;
	int count = 0;
	cin >> n;
	//1*1, 1*2 . . . 1*n , 2*2, 2*3, ... ,2*n, 3*3, 3*4 ...
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; i*j <= n; j++)
		{
			count++;
		}
	}
	cout << count<<endl;
	return 0;
}
