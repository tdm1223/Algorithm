// 16170. 오늘의 날짜는?
// 2020.12.29
// 구현
#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    time_t t;
    struct tm* localTime;
    t = time(NULL);
    localTime = localtime(&t);

    cout << localTime->tm_year + 1900 << endl << localTime->tm_mon + 1 << endl << localTime->tm_mday << endl;
    return 0;
}
