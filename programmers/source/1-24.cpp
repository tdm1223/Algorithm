//정수 내림차순으로 배치하기
// 2019.06.28
#include<vector>
#include<algorithm>

using namespace std;

long long solution(long long n)
{
	long long answer = 0;
	vector<int> v;
	// 주어진 정수를 자릿수 별로 쪼개 숫자를 넣음.
	while (n>0)
	{
		v.push_back(n % 10);
		n /= 10;
	}
	// 오름차순 정렬
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i<v.size(); i++)
	{
		answer = answer * 10 + v[i];
	}
	return answer;
}
