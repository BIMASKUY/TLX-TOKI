#include <bits/stdc++.h>
using namespace std;

int main() {

int x, a, b = 0, f[1000], y, j;
	cin >> x;
    y = x;

	for(int i = 2; i<=y; i++){
        f[i] = 0;
	    while( y%i == 0){
	        y = y/i;
            f[i]++;
	        if(y%i != 0){
	            break;
	        }
        }
        if(f[i]>0){
            b++;
        }        
    }

    b = b-1;
    
	for(int i = 2; i<=x; i++){
        a = 0;
	    while( x%i == 0){
	        a++;
	        x = x/i;
	        if(x%i != 0){
	            break;
	        }
	    }

        if( a > 0){
            if(a > 1){
                cout << i << "^" << a;
            }
            if(a == 1){       
                cout << i;     
            }
            if(b>0){
                cout << " x ";
                b = b-1;
            }        

            if(x == 1){
            break;
            }
        }
    }


}
