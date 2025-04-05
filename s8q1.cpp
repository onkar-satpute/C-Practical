#include<iostream>
using namespace std;

class B;
class A{
    int numA;
    public:
        A(int a){
            numA = a;
        }

        friend int sub(A, B);
};
class B{
    int numB;
    public:
        B(int b){
            numB = b;
        }

        friend int sub(A, B);
};

int sub(A  a, B b){
    return a.numA - b.numB;
}

int main(){
    A a(20);
    B b(5);
int result = sub(a, b);
cout<<"Substraction is: "<<result<<endl;
return 0;
}