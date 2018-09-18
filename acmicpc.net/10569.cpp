// 10569. 다면체
#include <iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main() {

	int t, v, e;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> v >> e;
		cout << e - v + 2<< endl;
	}

	return 0;
}
