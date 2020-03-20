// 1252. 이진수 덧셈
// 2019.09.02
// 문자열 처리, 자료구조, 스택
#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
	string a;
	string b;
	cin >> a >> b;

	stack<int> s1;
	stack<int> s2;
	stack<int> s3;
	for (int i = 0; i < a.size(); i++)
	{
		s1.push(a[i] - '0');
	}
	for (int i = 0; i < b.size(); i++)
	{
		s2.push(b[i] - '0');
	}

	int carry = 0;
	while (1)
	{
		if (s1.empty() && s2.empty())
		{
			// 마지막에 carry가 있다면 1추가
			if (carry == 1)
			{
				s3.push(1);
			}
			break;
		}

		int x = 0;
		int y = 0;
		if (!s1.empty())
		{
			x = s1.top();
			s1.pop();
		}

		if (!s2.empty())
		{
			y = s2.top();
			s2.pop();
		}

		if (x + y + carry >= 2)
		{
			s3.push(x + y + carry - 2);
			carry = 1;
		}
		else
		{
			s3.push(x + y + carry);
			carry = 0;
		}
	}

	bool flag = false; // 0000000 + 0000000 일때 0을 출력하기 위한 플래그
	while (!s3.empty())
	{
		if (s3.top() == 0 && !flag)
		{
			s3.pop();
		}
		else if (s3.top() == 1 && !flag)
		{
			cout << s3.top();
			s3.pop();
			flag = 1;
		}
		else
		{
			cout << s3.top();
			s3.pop();
		}
	}
	if (!flag)
	{
		cout << 0;
	}
	cout << endl;
	return 0;
}
