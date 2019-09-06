// 9656. 돌 게임 2
// 2019.09.06
// 구현, 알고리즘 게임
#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
	// 둘이 최선으로 게임을 했을 때 홀수면 창영, 짝수면 상근이가 이긴다.
	if (n%2==1)
	{
		cout << "CY" << endl;
	}
	else
	{
		cout << "SK" << endl;
	}
	return 0;
}
