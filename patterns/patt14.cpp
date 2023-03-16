
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number: ";
    int n;
    cin >> n;
    
    for(int i=n;i>=1;i--){
        char cnt = 'A';
        for(int j=1; j<=i;j++){
            cout << cnt++ << " ";
        }
        cout << endl;
    }
    return 0;
} 