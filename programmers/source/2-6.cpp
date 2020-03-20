// 최댓값과 최솟값
// 2019.06.28
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

string solution(string s)
{
	string buf;
	stringstream ss(s);
	vector<int> nums;
	while (ss >> buf)
	{
		int n = stoi(buf);
		nums.push_back(n);
	}
	sort(nums.begin(), nums.end());
	return to_string(nums[0]) + " " + to_string(nums[nums.size() - 1]);
}
