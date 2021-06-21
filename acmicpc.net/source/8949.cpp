// 8949. 대충 더해
// 2021.06.21
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    string b;

    cin >> a >> b;

    if (a.size() < b.size())
    {
        swap(a, b);
    }

    int size = a.size() - b.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        cout << (a[i + size] - '0') + (b[i] - '0');
    }
    return 0;
}
