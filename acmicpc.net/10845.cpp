// 10845. 큐
// 2019.05.22
// 큐
#include<iostream>

using namespace std;

int main()
{
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
		// push
		if (s == "push")
		{
			int k;
			cin >> k;
			arr[front++] = k;
		}
		// pop
		else if (s == "pop")
		{
			if (front == rear)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << arr[rear++] << endl;
			}
		}
		// size
		else if (s == "size")
		{
			cout << front - rear << endl;
		}
		// empty
		else if (s == "empty")
		{
			if (front == rear)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		// front
		else if (s == "front")
		{
			// 비었음
			if (front == rear)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << arr[rear] << endl;
			}
		}
		// back
		else if (s == "back")
		{
			// 비었음
			if (front == rear)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << arr[front - 1] << endl;
			}
		}
	}
	return 0;
}
