#include <iostream>

using namespace std;

int main() {

	int t, n, k;
	//n : 사탕의 종류의 수 
	//k : k개 이상 먹어야 행복
	cin >> t;
	while (t > 0)
	{
		int count = 0;
		t--;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			int ans = c / k;
			count += ans;
		}
		cout << count << endl;
	}
	
	return 0;
}