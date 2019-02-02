// 3460. 이진수
// 2019.02.02
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		vector<int> v;
		while (n > 0)
		{
			// 2로 나눠가면서 그 몫을 저장
			int a = n % 2;
			v.push_back(a);
			n /= 2;
		}

		for (int i = 0; i < v.size(); i++)
		{
			// 1인것만 출력
			if (v[i] == 1)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
