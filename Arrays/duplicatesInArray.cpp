/******** Duplicates in array ********/

#include<iostream>
using namespace std;

int duplicates(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<n; i++){
        ans=ans^i;
    }
    return ans;
}

int main(){

int size;
cin >> size;

int arr[1000];

for(int i=0;i<size;i++){
    cin >> arr[i];
}

cout << duplicates(arr,size);
}