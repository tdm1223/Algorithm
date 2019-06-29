// 6485.삼성시의 버스 노선
// 2019.06.29
#include<iostream>
#include<vector>

using namespace std;

int busStop[5001]; // busStop[i] : i번째 정류장을 지나가는 버스의 수
int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		fill(busStop, busStop + 5001, 0);
		int n;
		cin >> n;
		// 버스정류장마다 몇대의 버스가 지나가는지 계산
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			for (int j = a; j <= b; j++)
			{
				busStop[j]++;
			}
		}
		int p;
		cin >> p;
		vector<int> v;
		// num번째 지나는 버스의 수 저장
		for (int i = 0; i < p; i++)
		{
			int num;
			cin >> num;
			v.push_back(busStop[num]);
		}
		// 결과 출력
		cout << "#" << test_case << " ";
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
