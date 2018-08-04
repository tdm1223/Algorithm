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

		if (str == "push") { //push 명령어 일때. 

			int num;
			cin >> num;
			arr[++cnt] = num;

		}
		else if (str == "pop") {    //pop 명령어 일때. 

			if (cnt!=0) {
				cout << arr[cnt] << endl;
				cnt--;
			}
			else {
				cout << "-1" << endl;
			}

		}
		else if (str == "size") {        //size 명령어 일때. 

			cout << cnt << endl;

		}
		else if (str == "empty") {    //empty 명령어 일때,
			if (cnt==0)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}

		}
		else if (str == "top") {        //top 명령어 일때. 
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