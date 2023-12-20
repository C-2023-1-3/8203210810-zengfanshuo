#include<iostream>
using namespace std;
class Time {
private:
    int hour;
    int minute;
    int sec;
public:
    void setTime() {
        cin >> hour;
        cin >> minute;
        cin >> sec;
    }
    void displayTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};
int main() {
    Time t1; 
    t1.setTime(); 
    t1.displayTime();
    return 0;
}
