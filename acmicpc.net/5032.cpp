// 5032. 탄산음료
// 2018.10.15
#include<iostream>

using namespace std;

int main()
{
	//e : 가지고 있는 빈 병의 수, f : 그날 발견한 빈 병의 수, c : 새 병으로 바꾸는데 필요한 빈 병의 수
	int e, f, c;
	cin >> e >> f >> c;
	int total = e + f;
	int count = total / c;
	total = total % c;
	total += count;
	while (total - c >= 0)
	{
		total -= c;
		count++;
		total++;
	}

	cout << count << endl;
	return 0;
}
