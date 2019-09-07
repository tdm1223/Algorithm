// 11328. Strfry
// 2019.09.07
// 정렬
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		string a, b;
		cin >> a >> b;
		// 두 문자열의 정렬 결과가 같으면 strfry함수를 적용하여 만들 수 있는 문자열이 된다.
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if (a == b)
		{
			cout << "Possible" << endl;
		}
		else
		{
			cout << "Impossible" << endl;
		}
	}
	return 0;
}
