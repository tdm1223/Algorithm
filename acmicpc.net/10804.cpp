// 10804. 카드 역배치
// 2019.08.12
// 스택
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	vector<int> v(20);
	for (int i = 0; i < 20; i++)
	{
		v[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		stack<int> tmp;
		// 범위에 해당하는 값들을 스택에 저장
		for (int j = a-1; j <= b-1; j++)
		{
			tmp.push(v[j]);
		}
		// 역순으로 재배치
		int cnt = a - 1;
		while (!tmp.empty())
		{
			int front = tmp.top();
			v[cnt++] = front;
			tmp.pop();
		}
	}

	for (int i = 0; i < 20; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}
