// 1316.그룹 단어 체커
#include<iostream>
#include<string>
using namespace std;

int a[26]; //a~z까지 등장 유무를 저장하는 배열
int main()
{
	int n;
	cin >> n;
	int count = n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		for (int i = 0; i < 26; i++)
		{
			a[i] = 0;
		}

		a[s[0] - 'a'] = 1;

		for (int i = 1; i < s.size(); i++)
		{
			if (a[s[i] - 'a'] == 1 && s[i] != s[i - 1]) //조건에 어긋나는 경우가 있는지 확인
			{
				count--;
				break;
			}
			a[s[i] - 'a'] = 1;
		}
	}

	cout << count << endl;
	return 0;
}
