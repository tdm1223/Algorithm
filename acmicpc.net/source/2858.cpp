// 2858. 기숙사 바닥
// 2019.12.14
// 브루트 포스, 수학
#include<iostream>

using namespace std;

int main()
{
    int r, b;
    cin >> r >> b;

    int l = 1;
    int w;
    while (1)
    {
        if (b%l == 0)
        {
            w = b / l;
        }
        // 가로 * 2 + 세로 * 2 + 모서리4칸이 입력받은 빨간색 블록의 수와 같은지 체크
        int sum = w * 2 + l * 2 + 4;
        if (sum == r)
        {
            w > l ? cout << w + 2 << " " << l + 2 << endl : cout << l + 2 << " " << w + 2 << endl;
            break;
        }
        l++;
    }
    return 0;
}
