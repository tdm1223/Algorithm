// 1181. 단어 정렬
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}

int main()
{
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end(),compare);

	v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	return 0;
}
