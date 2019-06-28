// N개의 최소공배수
// 2019.06.28
#include<vector>
#include<algorithm>

using namespace std;
// 최대공약수 구하는 함수
int Gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return Gcd(b, a % b);
}
// 최소공배수 구하는 함수
int Lcm(int a, int b)
{
	return a * b / Gcd(a, b);
}

int solution(vector<int> arr)
{
	int answer = 1;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		answer = Lcm(answer, arr[i]);
	}
	return answer;
}
