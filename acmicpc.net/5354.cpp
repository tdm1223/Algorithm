// 5354. J박스
// 2018.12.16
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				// 모서리는 #로 출력
				if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1))
				{
					cout << "#";
				}
				else
				{
					cout << "J";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
