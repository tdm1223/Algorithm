// 1075. 나누기
// 2018.12.03
#include<iostream>

using namespace std;

int main()
{
	int n, f;
	cin >> n >> f;
	//뒤의 두자리 수를 지워준다.
	n /= 100;
	n *= 100;

	while (1)
	{
		if (n%f == 0)//나누어 떨어지면 종료
		{
			break;
		}
		n++;
	}

	n %= 100;
	if (n < 10)//한자리이면 앞에 0을 추가하여 두 자리로 만듦
	{
		cout << "0" << n << endl;
	}
	else
	{
		cout << n << endl;
	}
	return 0;
}
