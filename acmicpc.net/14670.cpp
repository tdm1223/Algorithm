// 14670. 병약한 영정
// 2018.11.26
#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, int> map; // 효능-약의 이름 저장하는 맵
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		map[a] = b;
	}

	int r;
	cin >> r;
	for (int i = 0; i < r; i++)
	{
		int l; // 증상의 개수
		cin >> l;
		bool flag = true;
		vector<int> v;
		for (int i = 0; i < l; i++)
		{
			int s; // 증상들
			cin >> s;
			if (map.find(s) != map.end()) // 약이 있다면 그 약을 저장해놓음
			{
				v.push_back(map[s]);
			}
			else // 약이 없다면 YOU DIED 출력을 위한 flag를 false로
			{
				flag = false;
			}
		}
		if (flag)
		{
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i] << " ";
			}
		}
		else
		{
			cout << "YOU DIED";
		}
		cout << "\n";
	}
	return 0;
}
