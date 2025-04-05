#include<iostream>
using namespace std;

class Printdata{
    public:
        void print(int value){
            cout<<"Value "<<value<<endl;
        }
        
        void print(string str){
            cout<<"String \""<<str<<"\"";
        }
};

int main(){
    Printdata p;
    p.print(10);
    p.print("hi");
    
    return 0;
}
