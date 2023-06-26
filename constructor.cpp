#include<iostream>
using namespace std;
class code{
    int id;
    public:
    code(){} //Default constructor
    code(int a){ //parameterizednconstructor
        id=a; 
    }
    code(code &x){  //copy constructor
         id=x.id;
    }
    void display(){
        cout<<id<<endl;
    }
};
int main(){
    code A(100);  //obj A is created and initialized
    code B(A); //copy constructor called
    code C=A; //copy constructor called again
    code D;  //D is created,not initialized
    D=A; //copy constructor not called
    cout<<"id of A: "<<endl;
    A.display();
    cout<<"id of B: "<<endl;
    B.display();
    cout<<"id of C: "<<endl;
    C.display();
    cout<<"id of D: "<<endl;
    D.display();

}