#include <iostream>
using namespace std;

int main(){
    
int f[2][1000], n, t, a, b, c, d, tempA, tempB, tempX[2], 
tempY[2], x[1000], y[1000];

string pilih;

cin >> n;

for( int i = 0; i < 2; i++){
    for( int j = 0; j<n; j++){
        cin >> f[i][j];
        }
}

cin >> t;

for( int i = 0; i<t; i++){
    c = 0;
    d = 0;
    for( int j = 0; j<2; j++){
      
        cin >> pilih;  
        if( pilih == "A"){
            cin >> a;
            tempA = f[0][a-1];
            tempX[j] = f[0][a-1];
            x[j] = a;
            c++;     
        }
        else if ( pilih == "B"){
            cin >> b;
            tempB = f[1][b-1];
            tempY[j] = f[1][b-1];
            y[j] = b;
            d++;
        }     
    }

    if( c > 0 && d > 0){
        swap (tempA, tempB);
        f[0][a-1] = tempA;
        f[1][b-1] = tempB;
    }

    else if( c > 0 && d == 0){
        swap( tempX[0], tempX[1] );
        f[0][x[0] - 1] = tempX[0];
        f[0][x[1] - 1] = tempX[1];
    }

    else if( c == 0 && d > 0){
        swap( tempY[0], tempY[1] );
        f[1][y[0] - 1] = tempY[0];
        f[1][y[1] - 1] = tempY[1];
    }
}

// Output

for( int i = 0; i <2; i++){
    for( int j = 0; j<n; j++){
        cout << f[i][j] << " ";
    }
    cout << endl;
}

}