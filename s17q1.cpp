#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int isPrime = 0;
    if(num < 2)
    isPrime = 0;
    else if(num==2 || num==3)
    isPrime = 1;
    else{
        for(int i = 2; i<=(num/2); i++){
            if(num%i==0){
                isPrime = 0;
                break;
            }
            else{
                isPrime = 1;
            }
        }
    }

    if(isPrime){
        cout<<"The given number is Prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }

    return 0;
}