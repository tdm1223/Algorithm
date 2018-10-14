// 1159. 농구 경기
// 2018.10.14
#include<iostream>
#include<string>

using namespace std;

int arr[26];
int main()
{
	int n;
	int cnt = 0;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;
		arr[s[0] - 97]++;//a=0 부터 z=25까지
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] >= 5)
		{
			cout << char(97 + i); //a=97부터 z=122까지
			cnt++;
		}
	}

	if (cnt == 0)//항복
	{
		cout << "PREDAJA";
	}

	cout << endl;
	return 0;
}
