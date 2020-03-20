// 5162. 두가지 빵의 딜레마
// 2019.06.30
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a > b)
		{
			swap(a, b);
		}
		int answer = 0;
		// 가격이 낮은거로만 최대로 구매하면 최댓값이된다.
		while (1)
		{
			c -= a;
			if (c < 0)
			{
				break;
			}
			answer++;
		}
		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;
}
