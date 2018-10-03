// 10569. 다면체
#include <iostream>

using namespace std;

int main()
{
	int t, v, e;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> v >> e;
		//면의 갯수 = 모서리 갯수 - 꼭짓점의 갯수 + 2
		cout << e - v + 2<< endl;
	}

	return 0;
}
