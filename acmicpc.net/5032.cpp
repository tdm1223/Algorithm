// 5032. 탄산음료
#include<iostream>
using namespace std;

int main()
{
	int e, f, c;
	cin >> e >> f >> c;
	int total = e+f;
	int count = total / c;
	total = total % c;
	total += count;
	while (total-c>=0)
	{
		total -= c;
		count++;
		total++;
	}
	cout << count << endl;
	return 0;
}
