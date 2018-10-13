// 1541. 잃어버린 괄호
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int ans = 0;
	string tmp = "";
	bool flag = false; //연산자 -가 나왔는지 안나왔는지 체크하는 플래그
	for (int i = 0; i <= s.size(); i++)
	{
		//연산자거나 식의 끝일 경우
		if (s[i] == '+' || s[i] == '-' || s[i]=='\0')
		{
			if (flag)
			{
				ans -= stoi(tmp);
			}
			else
			{
				ans += stoi(tmp);
			}
			tmp = ""; //초기화

			//-가 한번만 나오면 그 이후값은 모두 뺄셈으로 계산되도록 할 수 있다.
			if (s[i] == '-')
			{
				flag = true;
			}
		}
		else//피연산자일 경우
		{
			tmp += s[i]; 
		}
	}

	cout << ans << endl;
	return 0;
}
