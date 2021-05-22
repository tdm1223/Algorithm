// 9946. 단어 퍼즐
// 2021.05.22
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string before;
    string after;
    int t = 0;
    while (1)
    {
        t++;
        before.clear();
        after.clear();

        cin >> before;
        cin >> after;

        if (before == "END" && after == "END")
        {
            break;
        }

        sort(before.begin(), before.end());
        sort(after.begin(), after.end());

        if (before == after)
        {
            cout << "Case " << t << ": same" << endl;
        }
        else
        {
            cout << "Case " << t << ": different" << endl;
        }
    }
    return 0;
}
