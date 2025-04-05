#include<iostream>
using namespace std;

void sort(int arr[], int arraylength){
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

void sort(float arr[], int arraylength){
    for(int i = 0; i<arraylength; i++){
        for(int j=0; j<arraylength-i-1; j++){
            if(arr[j] > arr[j+1]){
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int array[]={20,40,10,15,45,35};
    float fArray[] = {20.5, 40.2, 10.1, 15.8, 45.0, 35.6};
    int length = sizeof(array) / sizeof(array[0]);
    sort(array, length);
    cout << "Sorted Array: ";
    for(int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << "\nSorted float Array: ";
    for(int i = 0; i < length; i++) {
        cout << fArray[i] << " ";
    }
    return 0;
}