#include<iostream>
using namespace std;
class second;
class first{
    int data1;
    public:
    first(int x){
        data1=x;
    }
     friend int sum(first,second);
};
class second{
    int data2;
    public:
    second(int x){
        data2=x;
    }
     friend int sum(first,second);
};
int sum(first f,second s){
    return (f.data1+s.data2);
}
int main(){
    first a(15);
    second b(20);
    cout<<"Sum: "<<sum(a,b)<<endl;
    return 0;

}