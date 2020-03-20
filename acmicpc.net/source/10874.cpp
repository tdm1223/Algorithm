// 10874. 이교수님의 시험
// 2019.09.07
// 구현
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool flag = true; // 아래 반복문을 돌아도 true면 만점자
		// 10문제 입력을 받는다.
		for (int j = 1; j <= 10; j++)
		{
			int k;
			cin >> k;
			// 패턴에 맞지 않는 답을 제출하면 문제를 틀린것
			if ((j - 1) % 5 + 1 != k)
			{
				flag = false;
			}
		}
		// 만점자는 번호 출력
		if (flag)
		{
			cout << i + 1 << endl;
		}
	}
	return 0;
}
