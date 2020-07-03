// 14709. 여우 사인
// 2020.07.03
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int finger[6];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 5; i++)
    {
        finger[i] = i;
    }

    bool flag = true;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }

        if (a == 1 && b == 3)
        {
            ans++;
        }
        else if (a == 3 && b == 4)
        {
            ans++;
        }
        else if (a == 1 && b == 4)
        {
            ans++;
        }
        else if ((a == 1 && b == 2) || (a == 1 && b == 5))
        {
            flag = false;
        }
        else if ((a == 2 && b == 3) || (a == 3 && b == 5))
        {
            flag = false;
        }
        else if ((a == 2 && b == 4) || (a == 4 && b == 5))
        {
            flag = false;
        }
    }

    if (ans == 3 && flag)
    {
        cout << "Wa-pa-pa-pa-pa-pa-pow!" << endl;
    }
    else
    {
        cout << "Woof-meow-tweet-squeek" << endl;
    }
    return 0;
}
