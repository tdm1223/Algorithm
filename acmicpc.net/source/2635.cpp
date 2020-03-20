// 2635. 수 이어가기
// 2019.10.26
// 구현
#include<iostream>
#include<vector>

using namespace std;

int ans;
vector<int> ansNum;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		vector<int> nums;
		nums.push_back(n);
		nums.push_back(i);
		while (1)
		{
			int k = nums[nums.size() - 2] - nums[nums.size() - 1];
			if (k < 0)
			{
				break;
			}
			nums.push_back(k);
		}
		if (nums.size() > ans)
		{
			ansNum = nums;
			ans = nums.size();
		}
	}
	cout << ans << "\n";
	for (int i = 0; i < ansNum.size(); i++)
	{
		cout << ansNum[i] << " ";
	}
	cout << endl;
	return 0;
}
