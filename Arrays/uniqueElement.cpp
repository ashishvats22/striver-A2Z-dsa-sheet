/********** unique element in array**********/

#include<iostream>
using namespace std;

// unique element

int uniqueElement(int arr[],int n){
    int ans = 0;
    for(int i=0; i<n ;i++){

// using Xor(^) it gives 0 as ouput if we give same number as input for example
/*
0^0=0
0^1=1
1^0=1
1^1=0
*/

        ans=ans^arr[i];     
    }
    return ans;
}

int main(){

int size;
cin >> size;

int arr[100];

for(int i=0;i<size; i++){
    cin>> arr[i];
}

cout << uniqueElement(arr,size);
return 0;
}

