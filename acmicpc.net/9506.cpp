// 9506. 약수들의 합
// 분류 : 수학
// 2018.11.18
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n == -1)
		{
			break;
		}

		vector<int> v;
    // 자기 자신을 제외한 약수 저장
		v.push_back(1);
		for (int i = 2; i*i <= n; i++)
		{
			if (n%i == 0)
			{
				v.push_back(i);
				v.push_back(n / i);
			}
		}
    // 출력을 위한 정렬
		sort(v.begin(), v.end());

		int sum = 0;
		for (int i = 0; i < v.size(); i++)
		{
			sum += v[i];
		}
		if (sum == n) // 완전수 일 때
		{
			cout << n << " = ";
			for (int i = 0; i < v.size()-1; i++)
			{
				cout << v[i] << " + ";
			}
			cout << v[v.size() - 1] << endl;
		}
		else // 완전수가 아닐 때
		{
			cout << n << " is NOT perfect." << endl;
		}
	}
	return 0;
}
