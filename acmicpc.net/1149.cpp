// 1149. RGB거리
// 2018.10.14
#include<iostream>
#include<algorithm>

using namespace std;

int RGB[1001][3];
enum { R, G, B };//R=0,G=1,B=2

int main()
{
	int n, r, g, b;
	cin >> n;
	//RGB[i][R] : i번째 집을 R로 칠할때 비용 최솟값
	//RGB[i][G] : i번째 집을 G로 칠할때 비용 최솟값
	//RGB[i][B] : i번째 집을 B로 칠할때 비용 최솟값
	for (int i = 0; i < n; i++)
	{
		cin >> r >> g >> b;
		RGB[i][R] = r + min(RGB[i - 1][G], RGB[i - 1][B]); //G와 B중 최솟값
		RGB[i][G] = g + min(RGB[i - 1][R], RGB[i - 1][B]); //R과 B중 최솟값
		RGB[i][B] = b + min(RGB[i - 1][R], RGB[i - 1][G]); //R과 G중 최솟값
	}

	//마지막집을 각각 R,G,B로 칠할때 비용 중 최솟값
	cout << min(RGB[n - 1][R], min(RGB[n - 1][G], RGB[n - 1][B])) << endl;
	return 0;
}
