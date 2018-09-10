// 2292. 벌집
#include<iostream>

using namespace std;

string d[251];
int main()
{
	long long n;
	long long count = 1;
	long long maxNum = 1;
	long long k=1;
	cin >> n;

	while (maxNum<n)
	{
		k = 6 * (count++);
		maxNum += k;
	}
	cout << count << endl;
	return 0;
}
