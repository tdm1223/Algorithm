// 15577. Prosjek
// 2022.03.14
// 자료구조
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<float, vector<float>, greater<float>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float k;
        cin >> k;
        pq.push(k);
    }

    while (!pq.empty())
    {
        if (pq.size() == 1)
        {
            break;
        }
        float a = pq.top();
        pq.pop();
        float b = pq.top();
        pq.pop();

        pq.push((a + b) / 2.0f);
    }

    cout << fixed;
    cout.precision(6);
    cout << (float)pq.top() << endl;
    return 0;
}
