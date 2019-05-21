// 2909. 캔디 구매
// 2019.05.21
// 구현
#include<iostream>

using namespace std;

int main()
{
	long long c, k;
	long long n = 1;
	cin >> c >> k;

	for (int i = 0; i < k; i++)
	{
		n *= 10;
	}
	k = n / 10;

	// 반올림 하는 과정
	// 한 자리수 낮은 k에 5를 곱한걸 c와 더한후 k보다 한자리수 높은 n으로 나누고 곱해준다.
	cout << (c + (k * 5)) / n * n << endl;
	return 0;
}
