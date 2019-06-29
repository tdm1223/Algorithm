// 5431. 민석이의 과제 체크하기
// 2019.06.29
#include<iostream>

using namespace std;

int arr[101];
int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		fill(arr, arr + 101, 0);
		int n, k;
		cin >> n >> k;
		// 과제 제출 체크
		for (int i = 0; i < k; i++)
		{
			int x;
			cin >> x;
			arr[x] = 1;
		}
		cout << "#" << test_case << " ";
		// 과제 안낸사람 출력
		for (int i = 1; i <= n; i++)
		{
			if (arr[i] == 0)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
