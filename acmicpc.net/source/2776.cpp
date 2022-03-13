// 2776. 암기왕
// 2022.03.13
// 자료구조
#include<iostream>
#include<set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    int n, m, k;
    set<int> note;
    while (t-- > 0)
    {
        note.clear();

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            note.insert(k);
        }

        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> k;
            if (note.find(k) == note.end())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
    }
    return 0;
}
