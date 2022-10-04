#include <bits/stdc++.h>
using namespace std;

int faktorial(int X){
    if( X == 1){
        return 1;
    }
    else if( X%2 == 0){
        return (X/2)*faktorial(X-1);
    }
    else{
        return X*faktorial(X-1);
    }
}

int main() {
int N;
cin >> N;

cout << faktorial(N);
}