// 10867. 중복빼고 정렬하기
// 2019.09.07
// 자료구조
#include<iostream>
#include<set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	set<int> s;
	// STL set에 넣어주면 중복빼고 알아서 정렬이 된다.
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		s.insert(k);
	}
	for (auto iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "\n";
	return 0;
}
