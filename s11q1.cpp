#include<iostream>
using namespace std;

inline void operations(int a, int b){
    cout<<"Addition is: "<<(a+b)<<endl;
    cout<<"Substraction is: "<<(a-b)<<endl;
    cout<<"Multiplication is: "<<(a*b)<<endl;
    cout<<"Division is: "<<(a/b)<<endl;
}

int main(){
    int x, y;               
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    operations(x, y);
}