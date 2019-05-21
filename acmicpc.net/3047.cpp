// 3047. ABC
// 2019.05.21
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> v(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
	}
	// 정렬
	sort(v.begin(), v.end());
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		cout << v[s[i] - 'A']<<" ";
	}
	cout << endl;
	return 0;
}
