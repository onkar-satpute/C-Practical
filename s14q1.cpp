#include<iostream>
using namespace std;

void interchange(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 10, b = 5;
    cout<<"Starting Values\n"<<"a = "<<a<<" b = "<<b<<endl;
    interchange(a, b);
    cout<<"After interchanging Values\n"<<"a = "<<a<<" b = "<<b<<endl;
return 0;
}