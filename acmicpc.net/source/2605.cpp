// 2605. 줄세우기
// 2019.05.20
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, first;
	cin >> n >> first;
	vector<int> order;
	order.push_back(first + 1);

	// 주어진 조건대로 삽입
	for (int i = 2; i <= n; i++)
	{
		int num;
		cin >> num;
		order.push_back(i);
		int tmp = order.size() - 1;
		for (int j = 0; j < num; j++)
		{
			swap(order[tmp], order[tmp - 1]);
			tmp--;
		}
	}
	// 순서 출력
	for (int j = 0; j < order.size(); j++)
	{
		cout << order[j] << " ";
	}
	cout << endl;
	return 0;
}
