// 15122. Forbidden Zero
// 2021.09.06
// 브루트포스
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (1)
    {
        bool flag = true;
        n++;
        int k = n;
        while (k != 0)
        {
            if (k % 10 == 0)
            {
                flag = false;
                break;
            }
            k /= 10;
        }

        if (flag)
        {
            break;
        }
    }

    cout << n << endl;
    return 0;
}
