#include <iostream>
#include<string>
using namespace std;

long long d[90]; //d[n] : n자리 이친수의 개수
int main()
{
	//점화식을 작성해보면 1,1,2,3,5,8순으로 이친수의 개수가 증가하게 된다.
	int n;
	cin >> n;
	d[0] = 1;
	d[1] = 1;
	for (int i = 2; i < n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << d[n - 1] << endl;
}