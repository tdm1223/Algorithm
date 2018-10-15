// 10828. 스택
// 2018.10.15
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[10000];
	int cnt = 0;
	string s;
	while (n>0)
	{
		n--;
		cin >> s;

		if (s == "push") //push
		{
			int num;
			cin >> num;
			arr[++cnt] = num;

		}
		else if (s == "pop") //pop
		{
			if (cnt != 0)
			{
				cout << arr[cnt] << endl;
				cnt--;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (s == "size") //size
		{
			cout << cnt << endl;
		}
		else if (s == "empty") //empty
		{
			if (cnt == 0)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else if (s == "top") //top
		{
			if (cnt != 0)
			{
				cout << arr[cnt] << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
	}

	return 0;
}
