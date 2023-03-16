#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number: ";
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++){
        char cnt = 'A';
        for(int j=1; j<=2*n-1;j++){
            if (j <= n-i ) cout<< " ";
            else if (j > n-i && j < n+i) 
            {   if(j<n) cout << cnt++;
                else if (j == n) cout << cnt;
                else   cout << --cnt;
            }
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
} 
