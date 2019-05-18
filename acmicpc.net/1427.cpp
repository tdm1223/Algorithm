// 1427. 소트인사이드
// 2019.05.18
// 정렬
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end(), greater<char>());

	cout << s << endl;
	return 0;
}
