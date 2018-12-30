// 2309. 일곱 난쟁이
// 2018.12.30
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> a;
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
		sum += temp; //모든 난쟁이 합을 우선 구한다
	}

	sort(a.begin(), a.end()); //미리 정렬

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			// 9명 난쟁이 합 중 두명의 난쟁이 합을 뺐을 때 100이 되면
			if (sum - a[i] - a[j] == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						cout << a[k] << endl;
					}
				}
			}
		}
	}

	return 0;
}
