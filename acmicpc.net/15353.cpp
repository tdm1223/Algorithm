// 15353. 큰 수 A+B (2)
// 2019.10.24
// 수학
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	if (a.size() > b.size())
	{
		swap(a, b);
	}
	string ans = "";
	int size = b.size() - a.size();
	for (int i = 0; i < size; i++)
	{
		a += '0';
	}
	int carry = 0;
	for (int i = 0; i < b.size(); i++)
	{
		int tmp = (a[i] - '0') + (b[i] - '0') + carry;
		if (tmp >= 10)
		{
			tmp -= 10;
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		ans+=(tmp+'0');
	}
	if (carry == 1)
	{
		ans += '1';
	}
	reverse(ans.begin(), ans.end());
	cout << ans <<endl;
	return 0;
}
