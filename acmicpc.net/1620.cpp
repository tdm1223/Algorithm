// 1620. 나는야 포켓몬 마스터 이다솜
// 2019.05.18
// 자료구조
#include<iostream>
#include<map>
#include<string>

using namespace std;

string map1[100001]; // 번호->이름
map<string, int> map2; // 이름->번호
char name[21]; // 포켓몬 이름
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string s;
		scanf("%s", name);
		s = name;

		map1[i + 1] = s; // 번호->이름 저장
		map2[s] = i + 1; // 이름->번호 저장
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%s", name);
		if (isdigit(name[0])) // 번호일때 이름 출력
		{
			cout << map1[atoi(name)] << "\n";
		}
		else // 이름일때 번호 출력
		{
			string s = name;
			cout << map2[s] << "\n";
		}
	}
	return 0;
}
