#include<iostream>
using namespace std;
class test{
    private:
    int x;
    public:
    test(int value){
        x=value;
    }
    void print();
};
void test::print(){
    cout<<"X = "<<x<<endl;
    cout<<this<<endl;
    cout<<"(*this).x = "<<(*this).x<<endl;
    cout<<"(this->x) = "<<this->x<<endl;
    cout<<x<<endl;
}
int main(){
    test t(55);
    t.print();
    return 0;
}