#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    int val = 0;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            if(i == j) {
                cout << 1 ;
                break;
            }
            if(j == 1 && i%2 == 0) {
                val = 0;
                cout << val++ << " ";
            }
            else if(j == 1 && i%2 != 0) {
                val = 1;
                cout << val++ << " ";
            }
            else  {
                if(val > 1 ) val = 0;
                cout << val++ << " ";
            }

        }
        cout << endl;
    }
    return 0;
} 