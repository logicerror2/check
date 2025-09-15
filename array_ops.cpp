#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void revArr(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, size);
}

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for (int i=0; i<size; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    printArray(arr, size);
    cout<<"after reversing";
    revArr(arr,size);
    
}