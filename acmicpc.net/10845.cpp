// 10845. 큐
// 2018.10.15
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

		if (s == "push")//push
		{
			int k;
			cin >> k;
			arr[front++] = k;
		}
		else if (s == "pop")//pop
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
		else if (s == "size")//size
		{
			cout << front - rear << endl;
		}
		else if (s == "empty")//empty
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
		else if (s == "front")//front
		{
			if (front == rear) //비었음
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << arr[rear] << endl;
			}
		}
		else if (s == "back")//back
		{
			if (front == rear) //비었음
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
