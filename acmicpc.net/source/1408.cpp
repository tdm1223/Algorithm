// 1408. 24
// 2021.06.13
// 수학
#include<iostream>
#include<string>

using namespace std;

struct Time
{
    int hour;
    int minute;
    int second;
    Time(int hour_, int minute_, int second_) : hour(hour_), minute(minute_), second(second_) {}
    Time() = default;
};

int main()
{
    string currentTime, startTime;
    cin >> currentTime >> startTime;

    Time current(stoi(currentTime.substr(0, 2)), stoi(currentTime.substr(3, 2)), stoi(currentTime.substr(6, 2)));
    Time start(stoi(startTime.substr(0, 2)), stoi(startTime.substr(3, 2)), stoi(startTime.substr(6, 2)));

    Time ans;

    ans.second = start.second - current.second;
    if (ans.second < 0)
    {
        ans.second += 60;
        start.minute--;
    }

    ans.minute = start.minute - current.minute;
    if (ans.minute < 0)
    {
        ans.minute += 60;
        start.hour--;
    }

    ans.hour = start.hour - current.hour;
    if (ans.hour < 0)
    {
        ans.hour += 24;
    }

    string hour = to_string(ans.hour);
    if (hour.size() == 1)
    {
        hour = '0' + hour;
    }

    string minute = to_string(ans.minute);
    if (minute.size() == 1)
    {
        minute = '0' + minute;
    }

    string second = to_string(ans.second);
    if (second.size() == 1)
    {
        second = '0' + second;
    }

    cout << hour << ":" << minute << ":" << second << endl;
    return 0;
}
