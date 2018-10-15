// 2908. 상수
// 2018.10.15
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	//입력이 세자릿수이기 때문에 맨앞과 맨뒤만 바꿔주면 된다.
	swap(a[0], a[2]);
	swap(b[0], b[2]);

	int c = stoi(a);
	int d = stoi(b);

	int ans = max(c,d);
	cout << ans << endl;
	return 0;
}
