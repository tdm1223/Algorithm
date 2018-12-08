// 2864. 5와 6의 차이
// 2018.12.08
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int min, max;
	string A, B;
	cin >> A >> B;
	// 6을 5로 바꿔 최솟값 만들기
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == '6')
		{
			A[i] = '5';
		}
	}
	for (int i = 0; i < B.size(); i++)
	{
		if (B[i] == '6')
		{
			B[i] = '5';
		}
	}
	min = stoi(A) + stoi(B);

	// 5를 6으로 바꿔 최댓값 만들기
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == '5')
		{
			A[i] = '6';
		}
	}
	for (int i = 0; i < B.size(); i++)
	{
		if (B[i] == '5')
		{
			B[i] = '6';
		}
	}
	max = stoi(A) + stoi(B);

	cout << min << " " << max;
	return 0;
}
