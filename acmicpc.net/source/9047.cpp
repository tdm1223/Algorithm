// 9047. 6174
// 2021.03.20
// 시뮬레이션
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string num;
    int t, a, b;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        cin >> num;
        while (1)
        {
            if (num == "6174")
            {
                cout << ans << '\n';
                break;
            }

            // 오름, 내림차순으로 정렬해서 차이를 구함
            sort(num.begin(), num.end(), greater<char>());
            a = stoi(num);
            sort(num.begin(), num.end());
            b = stoi(num);
            num = to_string(a - b);

            // 값이 3자리 이하일땐 앞에 0을 붙여준다.
            if (num.size() != 4)
            {
                if (num.size() == 1)
                {
                    num = "000" + num;
                }
                if (num.size() == 2)
                {
                    num = "00" + num;
                }
                if (num.size() == 3)
                {
                    num = "0" + num;
                }
            }
            ans++;
        }
    }
    return 0;
}
