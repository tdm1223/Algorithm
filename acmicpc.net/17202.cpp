// 17202. 핸드폰 번호 궁함
// 2019.05.18
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a;
	string b;
	string ans;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
		ans += b[i];
	}

	while (ans.size() > 2)
	{
		string tmp;
		for (int i = 1; i < ans.size(); i++)
		{
			// 이전값과 현재값을 더하고 10이 넘으면 일의자리만 남긴다.
			int k = (ans[i-1] - '0') + (ans[i] - '0');
			if (k >= 10)
			{
				k %= 10;
			}
      // k값을 tmp에 더해준다.
			tmp += (k + '0');
		}
    // ans를 tmp로 갱신한다.
		ans = tmp;
	}
	cout << ans << endl;
	return 0;
}
