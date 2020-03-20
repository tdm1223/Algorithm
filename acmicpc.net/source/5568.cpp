// 5568. 카드 놓기
// 2019.08.21
// 조합론
#include<iostream>
#include<vector>
#include<set>
#include<string>

using namespace std;

int n;
int k;
int visit[11];
vector<string> v;
string s = "";
set<string> ss;
// n개중에 k개의 숫자들을 이어 붙이는 과정
void go(int cnt, string& cur)
{
	if (cnt == k)
	{
		// 중복은 알아서 제거되도록 set을 사용한다.
		ss.insert(cur);
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!visit[i])
		{
			visit[i] = 1;
			string next = cur + v[i];
			go(cnt + 1, next);
			visit[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> k;
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	go(0, s);
	cout << ss.size() << endl;
	return 0;
}
