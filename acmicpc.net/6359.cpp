// 6359. 만취한 상범
// 분류 : 다이나믹 프로그래밍
// 2018.12.16
#include<iostream>

using namespace std;

int d[101]; //d[i]=0 : 닫힘 / d[i]=1 : 열림
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		int ans = 0; //탈출할 수 있는 학생의 수
		for (int i = 0; i <= 101; i++)
		{
			d[i] = 0;
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j += i)
			{
				if (d[j] == 0) //닫혀있으면 문을 열고 학생수 증가
				{
					d[j] = 1;
					ans++;
				}
				else //열여 있으면 문을 닫고 학생수 감소
				{
					d[j] = 0;
					ans--;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}
