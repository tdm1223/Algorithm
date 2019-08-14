// 16165. 걸그룹 마스터 준석이
// 2019.08.14
// 자료구조
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>

using namespace std;

struct girlGroup {
	string name;
	set<string> members;
};
int main()
{
	int n, m;
	cin >> n >> m;
	vector<girlGroup> girlGroups(n);
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		girlGroups[i].name = name;
		int k;
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			string girlName;
			cin >> girlName;
			girlGroups[i].members.insert(girlName);
		}
	}

	for (int i = 0; i < m; i++)
	{
		string name;
		int type;
		cin >> name >> type;

		// 걸그룹 이름
		if (type == 0)
		{
			for (int i = 0; i < n; i++)
			{
				if (girlGroups[i].name == name)
				{
					for (auto iter = girlGroups[i].members.begin();iter!=girlGroups[i].members.end();iter++)
					{
						cout << *iter << "\n";
					}
				}
			}
		}
		// 멤버이름
		else if(type==1)
		{
			for (int i = 0; i < n; i++)
			{
				for (auto iter = girlGroups[i].members.begin(); iter != girlGroups[i].members.end(); iter++)
				{
					if (*iter == name)
					{
						cout << girlGroups[i].name << "\n";
					}
				}
			}
		}
	}
	return 0;
}
