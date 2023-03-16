#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    //pyramid start
    for(int i=1;i<=n; i++){
        for(int j=0; j<n+(n-1);j++){
            if (j < (n-i)) cout << " ";
            else if (j >= n+i-1 )cout << " ";
            else cout << "*";
        }
        cout<< endl;
    }
    //inverted pyramid
    for(int i=n;i>=1; i--){
        for(int j=0; j<n+(n-1);j++){
            if (j < (n-i)) cout << " ";
            else if (j >= n+i-1 )cout << " ";
            else cout << "*";
        }
        cout<< endl;
    }
	return 0;
}