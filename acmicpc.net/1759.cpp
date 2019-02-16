// 1759. 암호 만들기
// 2019.02.16
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<char> alpa;
int l, c;
char ans[16];

int consonant; // 자음의 개수
int vowel; // 모음의 개수

// 재귀로 모든 암호 만들기
void go(int start, int cnt)
{
	if (cnt == l)
	{
		consonant = 0;
		vowel = 0;

		for (int i = 0; i < l; i++)
		{
			if (ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' || ans[i] == 'o' || ans[i] == 'u')
			{
				vowel++;
			}
			else
			{
				consonant++;
			}
		}
		// 최소 한 개의 모음과 최소 두 개의 자음으로 구성되어있다면 출력
		if (vowel >= 1 && consonant >= 2)
		{
			for (int i = 0; i < l; i++)
			{
				cout << ans[i];
			}
			cout << endl;
		}
		return;
	}

	for (int i = start; i < c; i++)
	{
		ans[cnt] = alpa[i];
		go(i + 1, cnt + 1);
	}
}

int main()
{
	cin >> l >> c;
	for (int i = 0; i < c; i++)
	{
		char tmp;
		cin >> tmp;

		alpa.push_back(tmp);
	}
	// 오름차순 정렬
	sort(alpa.begin(), alpa.end());

	go(0, 0);
	return 0;
}
