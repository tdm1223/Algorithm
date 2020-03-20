// 11656. 접미사 배열
// 2019.05.22
// 문자열 처리
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<string> ans;
	// 접미사 배열을 저장
	for (int i = 0; i < s.size(); i++)
	{
		ans.push_back(s.substr(i, s.size()));
	}
	// 정렬
	sort(ans.begin(), ans.end());
	// 결과 출력
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
