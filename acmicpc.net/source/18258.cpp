// 18258. 큐 2
// 2021.05.23
// 자료구조, 큐
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int q[2000001];
int main()
{
    memset(q, -1, 2000001);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    int k;
    int front = 0;
    int rear = 0;
    while (n-- > 0)
    {
        cin >> s;
        if (s == "push")
        {
            cin >> k;
            q[rear++] = k;
        }
        else if (s == "pop")
        {
            if (front == rear)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q[front++] << "\n";
            }
        }
        else if (s == "size")
        {
            cout << rear - front << "\n";
        }
        else if (s == "empty")
        {
            cout << (front == rear) << "\n";
        }
        else if (s == "front")
        {
            if (front == rear)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q[front] << "\n";
            }
        }
        else if (s == "back")
        {
            if (front == rear)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q[rear - 1] << "\n";
            }
        }
    }
    return 0;
}
