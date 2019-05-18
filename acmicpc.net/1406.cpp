// 1406. 에디터
// 2019.05.18
// 링크드 리스트
#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	string s;
	cin >> s;

	list<char> list;
	for (int i = 0; i < s.size(); i++)
	{
		list.push_back(s[i]);
	}
	auto cur = list.end();
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char order;
		cin >> order;
		switch (order)
		{
		// 커서를 왼쪽으로 한 칸 옮김
		case 'L':
			if (cur != list.begin()) // 맨 앞이면 무시
			{
				cur--;
			}
			break;
		// 커서를 오른쪽으로 한 칸 옮김
		case 'D':
			if (cur != list.end()) // 맨 뒤면 무시
			{
				cur++;
			}
			break;
		// 커서 왼쪽에 있는 문자 삭제
		case 'B':
			if (cur != list.begin()) // 맨 앞이면 무시
			{
				cur--;
				cur = list.erase(cur);
			}
			break;
		// P뒤에 나오는 문자를 커서 왼쪽에 추가함
		case 'P':
			char tmp;
			cin >> tmp;
			list.insert(cur, tmp);
			break;
		}
	}
	// 결과 출력
	for (auto iter = list.begin(); iter != list.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;
	return 0;
}
