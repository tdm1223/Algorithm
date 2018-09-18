// 5585. 거스름돈
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int exchange = 1000 - n;
	int count = 0;

	while (exchange > 0)
	{
		if (exchange >= 500) //500엔
		{
			exchange -= 500;
			count++;
		}
		else if (exchange >= 100) //100엔
		{
			exchange -= 100;
			count++;
		}
		else if (exchange >= 50 && exchange<100) //50엔
		{
			exchange -= 50;
			count++;
		}
		else if (exchange >= 10 && exchange<50) //10엔
		{
			exchange -= 10;
			count++;
		}
		else if (exchange >= 5 && exchange<10) //5엔
		{
			exchange -= 5;
			count++;
		}
		else if (exchange >= 1 && exchange<5) //1엔
		{
			exchange -= 1;
			count++;
		}

	}
	cout << count << endl;
	return 0;

}
