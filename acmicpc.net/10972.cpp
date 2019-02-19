// 10972. 다음 순열
// 2019.02.19
#include<iostream>
#include<algorithm>    //다음 순열을 구하기위한 헤더
#include<vector>       //벡터 사용을 위한 헤더

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	// 다음 순열 구하기
	if (next_permutation(v.begin(), v.end()))
	{
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	// 다음 순열이 없을 때
	else
	{
		cout << "-1" << endl;
	}

	return 0;
}
