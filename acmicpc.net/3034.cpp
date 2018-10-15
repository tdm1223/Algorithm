// 3034. 앵그리 창영
// 2018.10.15
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n, w, h;
	cin >> n >> w >> h;

	int len;
	for (int i = 0; i < n; i++)
	{
		cin >> len;
		//입력받은 성냥의 길이가 박스의 대각선의 길이와 작거나 같으면 들어갈 수 있다.
		if (len <= sqrt((w*w) + (h*h)))
		{
			cout << "DA" << endl;
		}
		else
		{
			cout << "NE" << endl;
		}
	}

	return 0;
}
