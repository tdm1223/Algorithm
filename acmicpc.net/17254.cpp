// 17254. 키보드 이벤트
// 2019.08.25
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct key {
	int num;
	int time;
	char k;
};
// 커스텀 정렬 조건
bool compare(key& a, key& b)
{
	// 둘의 입력 시간이 같다면 키보드 번호 오름차순
	if (a.time == b.time)
	{
		return a.num < b.num;
	}
	// 기본으로는 시간으로 오름차순
	return a.time < b.time;
}
int main()
{
	int n, m;
	cin >> n >> m;
	vector<key> v(m);
	for (int i = 0; i < m; i++)
	{
		cin >> v[i].num >> v[i].time >> v[i].k;
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].k;
	}
	cout << endl;
	return 0;
}
