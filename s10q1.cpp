#include<iostream>
using namespace std;

class Employee{
    float salary;
public:
    Employee(float s){
        salary = s;
    }

    void display(){
        cout<<salary;
    }

    Employee& operator--(){
        --salary;
        return *this;
    }

    Employee operator--(int){
        Employee temp = *this;
        salary--;
        return temp;
    }
};

int main(){
    Employee e(5000);
    e.display();
    cout<<endl;
    --e;
    e.display();
    cout<<endl;
    e--;
    e.display();
    
}