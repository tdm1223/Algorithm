#include<iostream>
#include<vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	int people[101];
	int cute = 0;
	int notCute = 0;
	for (int i = 0; i < num; i++) {
		cin >> people[i];
		if (people[i] == 1)
			cute++;
		else
			notCute++;
	}

	if (cute < notCute)
		cout << "Junhee is not cute!";
	else
		cout << "Junhee is cute!";

	return 0;
}