// 11021. A+B-7
// 2019.05.22
// 수학
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int count = 1;
	while (t > 0)
	{
		t--;
		int a, b;
		cin >> a >> b;
		cout << "Case #" << count << ": " << a + b << endl;;
		count++;
	}
	return 0;
}
