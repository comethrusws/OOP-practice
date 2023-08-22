#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int min;
    int sec;

public:
    Time(int h, int m, int s) : hour(h), min(m), sec(s) {}

    Time addTime(const Time& other) {
        int totalSeconds = sec + other.sec + (min + other.min) * 60 + (hour + other.hour) * 3600;

        int newHour = totalSeconds / 3600;
        int remainingSeconds = totalSeconds % 3600;
        int newMin = remainingSeconds / 60;
        int newSec = remainingSeconds % 60;

        return Time(newHour, newMin, newSec);
    }

    void displayTime() {
        cout << hour << ":" << min << ":" << sec << std::endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;

    cout << "Enter first time (hour min sec): ";
    cin >> h1 >> m1 >> s1;

    cout << "Enter second time (hour min sec): ";
    cin >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    Time result = time1.addTime(time2);

    cout << "Time  I: ";
    time1.displayTime();

    cout << "Time II: ";
    time2.displayTime();

    cout << "Sum (I+II): ";
    result.displayTime();

    return 0;
}
