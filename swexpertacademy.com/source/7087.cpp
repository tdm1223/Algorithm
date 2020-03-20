// 7087. 문제 제목 붙이기
// 2019.06.29
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int arr[26]; // A~Z까지의 등장 횟수를 저장하는 배열
int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		fill(arr, arr + 26, 0);
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			arr[s[0] - 'A']++;
		}

		int ans = 0;
		for (int i = 0; i < 26; i++)
		{
			// arr[i]==0이라면 순서대로 나오지 않은 것이므로 반복 중단
			if (arr[i] == 0)
			{
				ans = i;
				break;
			}
			if (i == 25)
			{
				ans = 26;
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
