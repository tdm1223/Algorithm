// 12904. A와 B
// 2019.05.23
// 구현
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	bool flag = false;
	string s, t;
	cin >> s >> t;

	// t로부터 역순으로 진행하여 s가 되는지 파악
	while (1)
	{
		// s와 t의 길이가 같을때 종료
		if (s.size() == t.size())
		{
			if (s == t)
			{
				flag = true;
			}
			break;
		}
		// 맨뒤의 글자 임시로 저장하고 제거한다.
		char tmp = t[t.size() - 1];
		t = t.substr(0, t.size() - 1);

		// 맨뒤가 B라면 문자열을 뒤집는다.
		if (tmp == 'B')
		{
			reverse(t.begin(), t.end());
		}
	}
	cout << flag << endl;
	return 0;
}
