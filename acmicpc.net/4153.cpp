// 4153. 직각삼각형
// 2019.05.21
// 구현
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	while (1)
	{
		vector<int> v(3);
		cin >> v[0] >> v[1] >> v[2];
		if (v[0] == 0 && v[1] == 0 && v[2] == 0) // 마지막 입력
		{
			break;
		}
		// 정렬
		sort(v.begin(), v.end());
		if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2]) // 직각삼각형 공식
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
	return 0;
}
