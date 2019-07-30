// 15819. 너의 핸들은
// 2019.07.30
// 문자열 처리
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	cout << v[m-1] << endl;
	return 0;
}
