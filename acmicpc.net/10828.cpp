#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	int arr[10000];
	int cnt = 0;
	string str;

	while(n>0)
	{
		n--;
		cin >> str;

		if (str == "push") { //push

			int num;
			cin >> num;
			arr[++cnt] = num;

		}
		else if (str == "pop") {    //pop

			if (cnt!=0) {
				cout << arr[cnt] << endl;
				cnt--;
			}
			else {
				cout << "-1" << endl;
			}

		}
		else if (str == "size") {        //size

			cout << cnt << endl;

		}
		else if (str == "empty") {    //empty
			if (cnt==0)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}

		}
		else if (str == "top") {        //top 
			if (cnt!=0) {
				cout << arr[cnt] << endl;
			}
			else {
				cout << "-1" << endl;
			}

		}

	}
	return 0;
}
