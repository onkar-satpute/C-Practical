#include<iostream>
using namespace std;

int sort(int arr[], int arraylength){
    for(int i = 0; i<arraylength; i++){
        for(int j=0; j<arraylength-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int array[]={20,40,10,15,45,35};
    length = sizeof(array) / sizeof(array[0])
    int resultArr[] = sort(array, length);
    cout<<resultArr[];
    return 0;
}