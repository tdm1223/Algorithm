// 4408. 자기 방으로 돌아가기
// 2019.07.08
#include<iostream>
#include<string>

using namespace std;

int room[201];

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		fill(room,room+201, 0);
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int start;
			int end;
			cin >> start >> end;
			// start, end 정렬
			if (start > end)
			{
				int tmp = start;
				start = end;
				end = tmp;
			}
			// 둘다 짝수로 만들어준다.
			if (start % 2 == 1)
			{
				start++;
			}
			if (end % 2 == 1)
			{
				end++;
			}
			start /= 2;
			end /= 2;
			for (int x = start; x <= end; x++)
			{
				room[x]++;
			}
		}

		// 방의 값중 최댓값을 반환
		int ans = 0;
		for (int i = 1; i < 201; i++)
		{
			if (room[i] > ans)
			{
				ans = room[i];
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
