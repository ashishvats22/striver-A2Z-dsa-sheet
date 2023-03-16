#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number: ";
    int n;
    cin >> n;
    int cnt = 1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout << cnt++ << " ";
        }
        cout << endl;
    }
    return 0;
} 
 
