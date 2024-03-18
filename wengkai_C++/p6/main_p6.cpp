#include<iostream>
#include<iomanip>

#ifdef _WIN32
#include<Windows.h>
#endif

using namespace std;
class Clock
{
private:
    int hour, minute, second;
    int year, month, day,week;
public:
    Clock() {};
    void SetTime1(int _Hour, int _Mins, int _Sec){//初始时间函数
        hour = _Hour;
        minute = _Mins;
        second = _Sec;
    }
    void SetTime2(int _year, int _month, int _day,int _week) {//初始时间函数
        year = _year;
        month = _month;
        day = _day;
        week = _week;
    }
    void ShowTime() { 
        cout << year << "year  " << month << "month  " << day << "day  " << "weekday" << week << endl;
        cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << endl;
    }//显示函数
    void Count_time() {//计时函数
        while (1)//24小时制
        {
            second += 1;
            if (hour >= 24) {
                hour -= 24;
                Correct_time();//年月日纠错
                week = week  % 7 + 1;//星期变化
            }
            if (minute >= 60){
                minute -= 60;
                hour += 1;
            }
            if (second >= 60) {
                second -= 60;
                minute += 1;
            }
            system("cls");//清屏，清除所有显示的信息
            ShowTime();
            usleep(1000000);//一秒延迟 | Sleep 函数是 Windows 平台上的函数，在 macOS 上可以使用 usleep 函数或者 sleep 函数来实现延迟。可以将 Sleep(1000) 替换为 sleep(1) 或者 usleep(1000000) | sleep(1) not work
        }
    }
    void Correct_time() {
        int flag = 0;
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            flag = 1;
        if (month == 2) {
            if ((flag == 1 && day == 29) || (flag == 0 && day == 28)) {
                day = 1;
                month += 1;
            }
            else
                day += 1;
        }
        else {
            switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:if (day == 31) { month += 1, day = 1; }
                   else day += 1; break;
            case 4:
            case 6:
            case 9:
            case 11:if (day == 30) { month += 1, day = 1; }
                   else day += 1; break;
            default:break;
            }
        }
    }
};
int main()
{
    Clock myClock;         //定义时钟类对象
    struct tm t;  //tm结构指针
    time_t now;  //声明time_t类型变量
    time(&now);  //获取系统日期和时间
    localtime(&t);  //获取当地日期和时间
    myClock.SetTime2(t.tm_year + 1900, t.tm_mon + 1, t.tm_mday,t.tm_wday);
    myClock.SetTime1(t.tm_hour, t.tm_min, t.tm_sec);
    myClock.ShowTime();
    myClock.Count_time();
    return 0;
}
