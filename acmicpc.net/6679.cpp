// 6679. 싱기한 네자리 숫자
// 2019.01.03
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	for(int i=1000;i<10000;i++)
	{
		int tmp = i;
		int a = tmp;
		int sum1 = 0; // 10진수로 표현했을 때 자릿수의 합
		int sum2 = 0; // 12진수로 표현했을 때 자릿수의 합
		int sum3 = 0; // 16진수로 표현했을 때 자릿수의 합

		// 10진수 표현
		while(a>0)
		{
			sum1+=a%10;
			a/=10;
		}
		a=tmp;
		// 12진수 표현
		while(a>0)
		{
			sum2+=a%12;
			a/=12;
		}
		a=tmp;
		// 16진수 표현
		while(a>0)
		{
			sum3+=a%16;
			a/=16;
		}
		// 모두 같으면 싱기한 네자리 숫자이므로 출력
		if(sum1==sum2 && sum2==sum3 && sum3==sum1)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
