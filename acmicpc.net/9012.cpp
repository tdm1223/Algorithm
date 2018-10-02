// 9012. 괄호
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	stack<char> stack;
	int t;
	cin >> t;
	string a;
	while (t > 0)
	{
		t--;
		cin >> a;
		for (int i = 0; i < a.size(); i++)
		{
			stack.push(a[i]);
		}
		int first = 0; //여는괄호 갯수
		int second = 0;//닫는괄호 갯수
		for (int i = 0; i < a.size(); i++)
		{
			int tmp = stack.top();
			stack.pop();
			if (tmp == '(')
			{
				first++;
				if (first > second)
				{
					break;
				}
			}
			else
			{
				second++;
			}
		}
		if (first == second)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
