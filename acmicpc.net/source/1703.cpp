// 1703. 생장점
// 2022.05.17
// 수학
#include<iostream>
#include<vector>

using namespace std;


vector <int> v;

int main()
{
    int a;
    int ans = 1;
    while (1)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }

        // init
        v.resize(a * 2);
        ans = 1;

        // input
        for (int i = 0; i < 2 * a; i++)
        {
            cin >> v[i];
        }

        // calculate
        for (int i = 0; i < a; i++)
        {
            int splitingFactor = v[i * 2];
            int cut = v[i * 2 + 1];
            ans = ans * splitingFactor - cut;
        }

        // output
        cout << ans << endl;
    }
    return 0;
}
