#include <iostream>
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

	printf("%.2f\n", v[0] * 1000);
}