// 2804. 크로스워드 만들기
// 2018.10.15
#include<iostream>
#include<string>
#include<vector>

using namespace std;

//두 문자열의 첫 교차점의 인덱스를 반환하는 함수
vector<int> Index(string a, string b)
{
	vector<int> tmp;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			if (a[i] == b[j])
			{
				tmp.push_back(i);
				tmp.push_back(j);
				return tmp;
			}
		}
	}
}

char ans[31][31];
int main()
{
	string a,b;
	cin >> a >> b;
	vector<int> v = Index(a, b);
	for (int i = 0; i < b.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			if (j == v[0])
			{
				ans[i][v[0]] = b[i];
			}
			else if (i == v[1])
			{
				ans[v[1]][j] = a[j];
			}
			else
			{
				ans[i][j] = '.';
			}
		}
	}

	for (int i = 0; i < b.size(); i++)
	{
		for (int j = 0; j < a.size(); j ++)
		{
			cout << ans[i][j];
		}
		cout << endl;
	}
	return 0;
}
