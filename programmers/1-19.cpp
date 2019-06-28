// 최대공약수와 최소공배수
// 2019.06.28
#include<vector>

using namespace std;

// 최대 공약수 구하기(재귀)
int Gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return Gcd(b, a%b);
}

vector<int> solution(int n, int m)
{
	vector<int> answer;
	int gcd = Gcd(n, m);
	int lcm = gcd * (n / gcd) * (m / gcd);
	answer.push_back(gcd);
	answer.push_back(lcm);
	return answer;
}
