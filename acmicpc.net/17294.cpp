// 17294. 귀여운 수~ε٩(๑> ₃ <)۶з
// 2019.07.26
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int arr[19];
	for (int i = 0; i < s.size(); i++)
	{
		arr[i] = s[i] - '0';
	}

	int flag = true;
	if (s.size() != 1)
	{
		int d = arr[0] - arr[1]; // 공차
		for (int i = 1; i < s.size(); i++)
		{
			if (arr[i - 1] - arr[i] != d)
			{
				flag = false;
				break;
			}
		}
	}
	if (flag)
	{
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << endl;
	}
	else
	{
		cout << "흥칫뿡!! <(￣ ﹌ ￣)>" << endl;
	}
	return 0;
}
