// 10828. 스택
// 2019.05.22
// 스택
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
		// push
		if (s == "push")
		{
			int num;
			cin >> num;
			arr[++cnt] = num;
		}
		// pop
		else if (s == "pop")
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
		 // size
		else if (s == "size")
		{
			cout << cnt << endl;
		}
		// empty
		else if (s == "empty")
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
		// top
		else if (s == "top")
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
