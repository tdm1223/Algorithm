// 1964. 오각형, 오각형, 오각형…
// 2018.12.03
#include<iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	// 각 항은 3n+4인 등차수열의 합만큼 갯수가 증가한다.
	// n이 아닌 n-1항까지의 합을 계산한후 처음값인 5와 더한다.
	// 등차수열의 합은 n*{2a + (n-1)d}/2로 계산. a는 첫째항, d는 공차
	long long sum = (((n - 1)  * (14 + (n - 2) * 3)) / 2) % 45678;
	cout << 5 + sum << endl;
	return 0;
}
