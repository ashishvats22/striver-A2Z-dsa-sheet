/************sum of all elements in an array **********/

#include<iostream>
using namespace std;

int sumOfArray(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
int size;
cin >> size;
int arr[100];
for(int i = 0; i<size; i++){
    cin >> arr[i];
}
cout << " Sum of all the elements in array is "<< sumOfArray(arr,size) << endl;
return 0;
}