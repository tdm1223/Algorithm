// 2959. 거북이
// 2019.05.21
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> v(4);
	for (int i = 0; i < 4; i++)
	{
		cin >> v[i];
	}

	// 오름차순 정렬
	sort(v.begin(), v.end());

	// 직사각형 넓이의 최댓값은 가장 작은 값과 두번째로 큰 값으로 결정된다.
	cout << v[0] * v[2] << endl;
	return 0;
}
