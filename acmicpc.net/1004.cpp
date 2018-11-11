// 1004. 어린왕자
// 2018.11.11
#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t>0)
	{
		t--;
		//출발점과 도착점 입력
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			int x, y, r, distance;
			cin >> x >> y >> r;
			// 두 점(출발점과 도착점)중 하나만 원 안에 있다면 count를 증가시켜 준다.
			distance = (x - x1) * (x - x1) + (y - y1) * (y - y1);
			bool in1 = distance > r * r ? false : true;
			distance = (x - x2) * (x - x2) + (y - y2) * (y - y2);
			bool in2 = distance > r * r ? false : true;
			if (in1 != in2)
			{
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}
