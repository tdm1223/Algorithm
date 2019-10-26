// 2303. 숫자 게임
// 2019.10.27
// 구현
#include<iostream>
#include<vector>

using namespace std;

int maxVal;
int idx;
int check(vector<int>& v)
{
	int val = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			for (int k = j + 1; k < 5; k++)
			{
				int sum = (v[i] + v[j] + v[k]) % 10;
				val = val > sum ? val : sum;
			}
		}
	}
	return val;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		vector<int> v(5);
		for (int i = 0; i < 5; i++)
		{
			cin >> v[i];
		}
		int val = check(v);
		if (maxVal <= val)
		{
			maxVal = val;
			idx = i + 1;
		}
	}
	cout << idx << endl;
	return 0;
}
