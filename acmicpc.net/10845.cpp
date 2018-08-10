#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int front = 0;
	int rear = 0;
	int arr[10001];
	while (n > 0)
	{
		n--;
		string s;
		cin >> s;

		if (s == "push")
		{
			int k;
			cin >> k;
			arr[front++] = k;
		}
		else if (s == "pop")
		{
			if (front == rear)
				cout << "-1" << endl;
			else
				cout << arr[rear++] << endl;
		}
		else if (s == "size")
		{
			cout << front - rear << endl;
		}
		else if (s == "empty")
		{
			if (front == rear) cout << "1" << endl;
			else cout << "0" << endl;
		}
		else if (s == "front")
		{
			if (front == rear)
				cout << "-1" << endl;
			else
			{
				cout << arr[rear] << endl;
			}
		}
		else if (s == "back")
		{
			if (front == rear)
				cout << "-1" << endl;
			else
			{
				cout << arr[front - 1] << endl;
			}
		}
	}
	return 0;
}