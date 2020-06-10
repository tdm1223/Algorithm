// 시험성적 평균과 등급 구하기
// 2020.06.11
#include<iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    double avg = (x + y + z) / 3.0f;

    cout << fixed;
    cout.precision(2);
    cout << avg << " ";
    if (avg >= 90)
    {
        cout << "A" << endl;
    }
    else if (avg >= 80)
    {
        cout << "B" << endl;

    }
    else if (avg >= 70)
    {
        cout << "C" << endl;

    }
    else if (avg >= 60)
    {
        cout << "D" << endl;

    }
    else
    {
        cout << "F" << endl;
    }

    return 0;
}
