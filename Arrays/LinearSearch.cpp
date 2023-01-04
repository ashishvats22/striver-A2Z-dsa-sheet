/*************Linear search *****************/

#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0; 
}
int main(){
    cout << "Enter the size of array " << endl;
    int size;
    cin >> size;
    cout << "Enter the elements into array " << endl;
    int arr[10];
    for(int i=0 ;i<size; i++){
        cin >> arr[i];
    }
    cout << endl;
    cout << "Enter the element to check in array " << endl;
    cout << endl;
    int key;
    cin >> key;
    bool searchFound = search(arr,size,key);
    if(searchFound){
        cout << "Key is present " << endl;
    }
    else{
        cout << "Key is absent" << endl;
    }
return 0;
}