#include <bits/stdc++.h>
using namespace std;

void rekursif(int n){

if(n==1){
    cout << '*' << endl;
}
else if(n>=2){
    rekursif(n-1);
    for(int i = 1; i<=n; i++){
        cout << '*';
    }
    cout << endl;
    rekursif(n-1);
}

}

int main(){

int N;
cin >> N;
rekursif(N);

}
