#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number: ";
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            while(j<=i) cout << j++ ;
            int f = 1;
            while(f++ <= (2*n)-(2*i)) cout << " ";
            int k = i;
            while(k) cout << k--;
            break;
        }
        cout << endl;
    }
    return 0;
} 