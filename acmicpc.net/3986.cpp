// 3986. 좋은 단어
#include <iostream>
#include <string>
#include<stack>
using namespace std;

int arr[26];
int main()
{
	int n;
	cin >> n;
	int count = 0;
	while (n > 0)
	{
		n--;
		stack<char> s;
		string a;
		cin >> a;

		for (int i = 0; i < a.size(); i++)
		{
			if (s.empty())
				s.push(a[i]);
			else if (s.top() == a[i])
				s.pop();
			else
				s.push(a[i]);
		}

		if (s.empty())
			count++;

	}
	cout << count << endl;
	return 0;
}
