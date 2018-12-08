// 2810. 컵홀더
// 2018.12.08
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int count = 1; // 기본적으로 맨 왼쪽에 하나를 놓을 곳이 있음.
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'S')//일반 좌석일때
		{
			count++;
		}
		else if (s[i] == 'L')//커플석일때
		{
			i++;
			count++;
		}
	}
	//사람의 수와 계산한 count 중 작은 값을 출력
	cout << min(count, n) << endl;
	return 0;
}
