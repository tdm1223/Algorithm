// 2810. 컵홀더
#include <iostream>
#include<string>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int count = 1; //기본적으로 맨 왼쪽에 하나를 놓을 곳이 있음.
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
	if (n > count)
		cout << count << endl;
	else
		cout << n << endl;
	return 0;
}
