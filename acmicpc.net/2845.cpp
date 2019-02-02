// 2845. 파티가 끝나고 난 뒤
// 2019.02.02
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int l, p;
	cin >> l >> p;
	vector<int> ans;
	int sum = l * p; // 총 넓이 계산
	for (int i = 0; i < 5; i++)
	{
		int k;
		cin >> k;
		ans.push_back(k - sum);
	}

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
