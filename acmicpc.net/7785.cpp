// 7785. 회사에 있는 사람
// 2018.11.26
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<string, bool> map; // string의 존재유무 저장 하는 map
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		if (b == "enter")
		{
			map[a] = true;
		}
		else
		{
			map[a] = false;
		}
	}

	// 사전 역순으로 출력
	for (auto iter = map.rbegin(); iter != map.rend(); iter++)
	{
		if (iter->second == true)
		{
			cout << iter->first << "\n";
		}
	}
	return 0;
}
