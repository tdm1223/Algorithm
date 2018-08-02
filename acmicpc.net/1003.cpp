#include<iostream>
#include<algorithm>

using namespace std;
int d[40];
int fibonacci(int n)
{
	d[0] = 1, d[1] = 1;
	if (n <= 1) return d[n];
	else {	
		if (d[n] > 0) return d[n];
	}
	return d[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		if (n == 0) printf("1 0\n");
		else if (n == 1) printf("0 1\n");
		else {
			fibonacci(n);
			printf("%d %d\n", d[n - 2], d[n - 1]);
		}
	}

	return 0;
}