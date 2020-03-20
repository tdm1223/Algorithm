// 폰켓몬
// 2019.08.27
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	set<int> s;
  // 입력의 중복을 제거함
	for (int i = 0; i < nums.size(); i++)
	{
		s.insert(nums[i]);
	}
  // 중복을 제거한 set과 처음 입력크기/2 중 최솟값이 정답
	answer = min(s.size(), (nums.size() + 1) / 2);
	return answer;
}
