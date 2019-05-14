// 1212. 8진수 2진수
// 2019.05.14
// 진법
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string ans;
  // 각 자릿수에 대해 8진수->2진수로 변환
	for (int i = 0; i < s.size(); i++)
	{
		int k = s[i] - '0';
		string tmp;
		for (int j = 0; j < 3; j++)
		{
			if (k % 2 == 0)
			{
				tmp += '0';
			}
			else
			{
				tmp += '1';
			}
			k /= 2;
		}
		for (int j = 2; j >= 0; j--)
		{
			ans += tmp[j];
		}
	}
  // 맨앞에 나오는 0들을 제거하기 위한 작업
	int index = 0;
	for (int i = 0; i < ans.size()-1; i++)
	{
		if (ans[i] == '0')
		{
			index++;
		}
		else
		{
			break;
		}
	}
	cout << ans.substr(index, ans.size()) << endl;
	return 0;
}
