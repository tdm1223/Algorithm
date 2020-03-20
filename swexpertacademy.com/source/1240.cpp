// 1240. 단순 2진 암호코드
// 2019.07.03
#include<iostream>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main()
{
	int t;
	cin >> t;
	// 맵에 문제에있는 암호를 미리 저장함
	map<string, int> password;
	password["0001101"] = 0;
	password["0011001"] = 1;
	password["0010011"] = 2;
	password["0111101"] = 3;
	password["0100011"] = 4;
	password["0110001"] = 5;
	password["0101111"] = 6;
	password["0111011"] = 7;
	password["0110111"] = 8;
	password["0001011"] = 9;
	for (int test_case = 1; test_case <= t; test_case++)
	{
		string code[51];
		int arr[9];
		int x, y;
		cin >> x >> y;

		for (int i = 0; i < x; i++)
		{
			cin >> code[i];
		}

		int cnt = 8;
		for (int m = 0; m < x; m++)
		{
			for (int i = y - 1; i >= 0; i--)
			{
				if (i - 7 < 0)
				{
					break;
				}
				string tmp = code[m].substr(i - 7, 7);
				// 맵에 있는거라면 값을 추출
				if (password.find(tmp) != password.end())
				{
					i -= 6;
					arr[cnt--] = password[tmp];
				}
			}
			// 모두 추출했다면 종료
			if (cnt == 0)
			{
				break;
			}
		}
		// 추출한것으로 암호코드를 계산
		int ans = 0;
		// 홀수 자리의 합 x 3
		for (int i = 1; i < 9; i += 2)
		{
			ans += arr[i];
		}
		int tmp = ans;
		tmp *= 3;
		// 짝수 자리의 합
		for (int i = 2; i <= 8; i += 2)
		{
			ans += arr[i];
			tmp += arr[i];
		}
		// 10으로 나누어 떨어진다면 올바른 암호코드이므로 미리 계산한 합 출력
		if (tmp % 10 == 0)
		{
			cout << "#" << test_case << " " << ans << endl;
		}
		else
		{
			cout << "#" << test_case << " 0" << endl;
		}
	}
}
