// 2822. 점수 계산
// 2018.10.15
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<pair<int, int>> score(8);
	for (int i = 0; i < 8; i++)
	{
		int a;
		cin >> a;
		score[i].first = a;
		score[i].second = i + 1;
	}

	sort(score.begin(), score.end());

	vector<int> ans;
	int sum = 0;
	for (int i = 3; i < 8; i++)
	{
		sum += score[i].first;
		ans.push_back(score[i].second);
	}
	sort(ans.begin(), ans.end());
	cout << sum << endl;
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
