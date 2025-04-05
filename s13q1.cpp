#include<iostream>
using namespace std;

class Student{
    
public:
    int maximum(int a, int b){
        return (a > b ?  a : b);
    }

    int maximum(int *a, int arraylength){
        int max = a[0];
        for(int i=1; i < arraylength; i++){
            if(a[i] > max)
            max = a[i];
        }
        return max;
    }

};

int main(){
    Student s;
    int score1 = 70;
    int score2 = 60;
    cout<<"maximum score is: "<<s.maximum(score1, score2)<<endl;

    int scores[] = {75, 88, 91, 67, 95, 83};
    int length = sizeof(scores) / sizeof(scores[0]);
    cout<<"maximim score from array is: "<<s.maximum(scores, length)<<endl;

    return 0;
}