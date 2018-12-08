// 2914. 저작권
// 2018.12.08
#include<iostream>

using namespace std;

int main()
{
	int a, i;
	// a : 곡 개수 , i : 평균 값
	cin >> a >> i;
	cout << a * (i - 1) + 1 << endl;
	return 0;
}
