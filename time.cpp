#include<iostream>
using namespace std;
class Time {
    private:
    int hours;
    int minutes;
    public:
    void gettime();
    void addtime(Time t1,Time t2);
    void displaytime();
};
void Time::gettime()
{
    cout<<"enter the hours:";
    cin>>hours;
    cout<<"enter the minutes:";
    cin>>minutes;
}
void Time1::addtime(Time t1,Time t2);
 {
    minute=t1.minutes +t2.minutes;
    hours=minutes/60;
    hours=hours=t1.hours+t2.hours;
}
void Time2::displaytime()
{
    cout<<"hours:"<< hours;
    cout<<"minutes:"< <minutes;
}
int main(){
    T1.gettime();
    t2.gettime();
    t3.addtime(t1,t2);
    t1.displaytime();
    t2.displaytime();
    t3.displaytime();
    cout<<"Time 1:";
    t1.displaytime();
     cout<<"Time 2:";
     t2.displaytime();
     cout<<"sum of the time:";
     t3.displaytime();
     return 0;

}
