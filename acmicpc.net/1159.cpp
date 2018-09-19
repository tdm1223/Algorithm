// 1159. 농구 경기
#include <iostream>
using namespace std;


char ch[30];
int arr[26];

int main()
{
	int n, cnt=0;
	cin >> n;

	while (n--)
	{
		cin >> ch;
		arr[ch[0] - 97]++; //a=0 부터 z=25까지
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] >= 5)
		{
			cout << char(97 + i); //a=97부터 z=122까지
			cnt++;
		}
	}


	if (cnt == 0)
		cout << "PREDAJA";

	cout << endl;

}
