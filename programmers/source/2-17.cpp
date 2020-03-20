// 예상 대진표
// 2019.10.10
#include<iostream>

using namespace std;

int solution(int n, int a, int b)
{
	int answer = 0;

	// b와 a가 만날때까지 반복
	while (b != a)
	{
		b = (b + 1) / 2;
		a = (a + 1) / 2;
		answer++;
	}

	return answer;
}
