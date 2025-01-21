#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class Clock {
private:
    int hour, minute, second;
    int year, month, day, week;
public:
    Clock() {};
    
    void SetTime1(int _Hour, int _Mins, int _Sec) {
        hour = _Hour;
        minute = _Mins;
        second = _Sec;
    }
    
    void SetTime2(int _year, int _month, int _day, int _week) {
        year = _year;
        month = _month;
        day = _day;
        week = _week;
    }
    
    void ShowTime() {
        cout << year << "年  " << month << "月  " << day << "日  " << "星期" << week << endl;
        cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << endl;
    }
    
    void Count_time() {
        while (1) {
            time_t rawtime;
            struct tm* timeinfo;
            time(&rawtime);
            timeinfo = localtime(&rawtime);
            
            hour = timeinfo->tm_hour;
            minute = timeinfo->tm_min;
            second = timeinfo->tm_sec;
            
            year = timeinfo->tm_year + 1900;
            month = timeinfo->tm_mon + 1;
            day = timeinfo->tm_mday;
            week = timeinfo->tm_wday;
            
            ShowTime();
            sleep(1); // 1秒延迟
            system("clear"); // 清屏
        }
    }
};

int main() {
    Clock myClock;
    myClock.Count_time();
    
    return 0;
}

