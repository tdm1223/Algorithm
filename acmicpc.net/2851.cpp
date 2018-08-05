#include <cstdio>
#include <queue>
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;


int main(void) {
	int arr[10];
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	int sum = 0;
	
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
		if (sum == 100)
			break;
		if (sum > 100) {
			if (sum-100 <= 100-(sum - arr[i])) 
			{
				break;
			}
			else
			{
				sum = sum - arr[i];
				break;
			}
		}

	}
	cout << sum;
}