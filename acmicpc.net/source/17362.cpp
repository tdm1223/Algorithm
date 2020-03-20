// 17362. 수학은 체육과목 입니다 2
// 2019.07.29
// 구현
#include<iostream>

using namespace std;

int num[8] = { 1,2,3,4,5,4,3,2 }; // 숫자는 배열처럼 반복된다.
int main()
{
	int n;
	cin >> n;
	int ans = 0;
	cout << num[(n - 1) % 8] << endl;
	return 0;
}
