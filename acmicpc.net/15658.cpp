// 15658. 연산자 끼워넣기 (2)
// 2019.08.23
// 브루트 포스
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int n;
int num[11];
int op[4];
int arr[11];
int opCnt;

int minA = 2100000000;
int maxA = -2100000000;
// 계산
void calculate()
{
	stack<int> s;
	s.push(num[0]);

	for (int i = 1; i < n; i++)
	{
		int first = s.top();
		int second = num[i];
		s.pop();

		if (arr[i - 1] == 0)
		{
			s.push(first + second);
		}
		else if (arr[i - 1] == 1)
		{
			s.push(first - second);
		}
		else if (arr[i - 1] == 2)
		{
			s.push(first * second);
		}
		else if (arr[i - 1] == 3)
		{
			if (first < 0)
			{
				s.push(((first*-1) / second)*-1);
			}
			else
			{
				s.push(first / second);
			}
		}
	}
	minA = min(minA, s.top());
	maxA = max(maxA, s.top());
}

void go(int cnt)
{
	// 연산자를 모두 골랐다면 계산을함
	if (cnt == n - 1)
	{
		calculate();
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (op[i] > 0)
		{
			op[i]--;
			arr[cnt] = i;
			go(cnt + 1);
			op[i]++;
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> op[i];
		opCnt += op[i];
	}
	go(0);
	cout << maxA << endl << minA << endl;
	return 0;
}
