//문자열 내림차순으로 배치하기
// sort(s.begin(), s.end(), greater<char>());
// sort(s.rbegin(),s.rend());
// 2019.03.08
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string solution(string s)
{
	string answer = "";
	vector<char> v;
	for (int i = 0; i<s.size(); i++)
	{
		v.push_back(s[i]);
	}
	sort(v.begin(), v.end(), greater<char>());
	for (int i = 0; i<v.size(); i++)
	{
		answer += v[i];
	}
	return answer;
}
