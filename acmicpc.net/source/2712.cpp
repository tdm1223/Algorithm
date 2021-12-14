// 2712. 미국 스타일
// 2021.12.15
// 구현
#include<iostream>
#include<string>

using namespace std;

struct Number
{
    double num;
    string unit;
};
int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        Number number;
        cin >> number.num >> number.unit;

        if (number.unit == "kg")
        {
            printf("%.4lf lb\n", number.num * 2.2046);
        }
        else if (number.unit == "lb")
        {
            printf("%.4lf kg\n", number.num * 0.4536);
        }
        else if (number.unit == "l")
        {
            printf("%.4lf g\n", number.num * 0.2642);
        }
        else if (number.unit == "g")
        {
            printf("%.4lf l\n", number.num * 3.7854);
        }
    }
    return 0;
}
