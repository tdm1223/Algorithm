// 2810. 컵홀더
#include <iostream>
#include<string>
using namespace std;


int main(void)
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int count = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'S')
		{
			count++;
		}
		else if (s[i] == 'L')
		{
			i++;
			count++;
		}
	}

	if (n > count)
		cout << count << endl;
	else
		cout << n << endl;
	return 0;

}
