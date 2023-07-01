//Object as function Arguments and Return Type
#include<iostream>
using namespace std;
class Time{
    int hr,min,sec;  //declaration of hour,minutes and second.
    public:
    void input(){
        cout<<"Enter hour, minutes and seconds: ";
        cin>> hr >> min >> sec;
    }
    void display(){
        cout<< hr <<" hour "<< min <<" Minutes and  "<< sec <<" Second "<<endl;
    }
    Time add(Time t1,Time t2){
        Time temp;
        temp.sec = t1.sec + t2.sec;
        temp.min = t1.min + t2.min+ temp.sec/60;
        temp.sec = temp.sec%60;
        temp.hr = t1.hr + t2.hr + temp.min/60;
        temp.min = temp.min%60;
        return temp;
    }
};
int main(){
    Time t1, t2, t3;
    t1.input();
    t2.input();
    t3 = t3.add(t1,t2);
    cout<<"The addition of two time is: ";
    t3.display();
    return 0;
}
