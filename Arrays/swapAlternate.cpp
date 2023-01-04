/******* swap alternate  *******/

#include<iostream>
using namespace std;

//swap Alternate

void swapAlternate(int arr[],int n){
   for(int i=0;i<n;i=i+2){
    if(i+1 < n){
        swap(arr[i],arr[i+1]);
    }
   }
}

// print array

void printArray(int arr[],int n){
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){

int size;
cin >> size;

int arr[100];
for(int i=0; i<size; i++){
    cin >> arr[i];
}

    swapAlternate(arr,size);
    printArray(arr,size);
    
    return 0;
}