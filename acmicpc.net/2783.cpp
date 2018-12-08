// 2783. 삼각 김밥
// 2018.12.08
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<float> v;
	int x, y, n;
	cin >> x >> y >> n;
	v.push_back( (float)x / y);
	while (n > 0)
	{
		n--;
		int x, y;
		cin >> x >> y;
		v.push_back((float)x / y);
	}
	sort(v.begin(), v.end());
	// 오차는 0.01까지 허용하므로 2자리까지 출력
	printf("%.2f\n", v[0] * 1000);
	return 0;
}
