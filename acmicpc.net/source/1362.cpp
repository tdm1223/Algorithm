// 1362. 펫
// 2021.07.27
// 구현
#include <iostream>

using namespace std;

int main()
{
    int cnt = 0;
    while (1)
    {
        cnt++;
        int o, w;
        cin >> o >> w;

        if (o == 0 && w == 0)
        {
            break;
        }

        while (1)
        {
            char command;
            int n;
            cin >> command >> n;

            if (command == '#' && n == 0)
            {
                if (w <= 0)
                {
                    cout << cnt << " RIP" << endl;
                    break;
                }
                else if ((o * (0.5)) < w && w < o * 2)
                {
                    cout << cnt << " :-)" << endl;
                    break;
                }
                else
                {
                    cout << cnt << " :-(" << endl;
                    break;
                }
            }

            if (w > 0)
            {
                if (command == 'F')
                {
                    w += n;
                }
                else
                {
                    w -= n;
                }
            }
        }
    }
    return 0;
}
