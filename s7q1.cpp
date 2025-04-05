#include<iostream>
using namespace std;

class Number{
    int a, b;
    public:
        Number(){
            a = 0;
            b = 0;
        }

        Number(int x, int y){
            a = x;
            b = y;
        }

        void display(){
            cout<<"num 1 is: "<<a<<" num 2 is: "<<b<<endl;
            cout<<"maximum is: "<<(a > b ? a : b)<<endl;
        }
};

int main(){
    Number obj1;
    cout<<"Object 1: "<<endl;
    obj1.display();

    Number obj2(10, 20);
    cout<<"Object 2: "<<endl;
    obj2.display();

    return 0;
}