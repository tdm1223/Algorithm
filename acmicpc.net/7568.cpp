// 7568. 덩치
// 2019.05.21
// 브루트 포스
#include<iostream>
#include<vector>

using namespace std;

struct people
{
	int weight;
	int height;
	int rank = 1; // 처음 순위는 1등으로 초기화
};

int main()
{
	int n;
	cin >> n;
	vector<people> v(n);
	for (int i = 0; i < n; i++)
	{
		// 몸무게와 키 입력
		cin >> v[i].weight >> v[i].height;
	}
	// 전체 비교
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i].weight < v[j].weight && v[i].height < v[j].height)
			{
				// 몸무게, 키 모두 작다면 순위 밀려남
				v[i].rank++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i].rank << " ";
	}
	cout << endl;
	return 0;
}
