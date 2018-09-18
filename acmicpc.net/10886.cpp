// 10886. 0 = not cute / 1 = cute 
#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n, que,cute=0,notCute=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> que;
		if (que == 1) cute++;
		else if (que == 0) notCute++;
	}

	if (cute > notCute)
	{
		cout <<"Junhee is cute!"<< endl;
	}
	else
	{
		cout << "Junhee is not cute!" << endl;
	}
}
