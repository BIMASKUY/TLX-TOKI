#include <bits/stdc++.h>
using namespace std;

int main(){

int N, i;
char f[1000], cek = 0;
string Kata = "";

cin >> N;

for(i = 0; i<N; i++){
    f[i] = char(i+1+48);
    Kata = Kata + f[i];
}

sort(f, f+N);

if(N==1){
    cout << '1';
    return 0;
}

if(N==2){
    cout << Kata << endl;
    swap(Kata[0], Kata[1]);
    cout << Kata;
    return 0;
}

for(i = 0; i<N-2; i++){
    if( (Kata[i] > Kata[i+1] && Kata[i+2] > Kata[i+1] ) or ( Kata[i+1] > Kata[i] && Kata[i+1]>Kata[i+2] ) ){
        cek++;
        if(cek == N-2){
            cout << Kata << endl;
        }
    }
}

while(next_permutation(Kata.begin(), Kata.end())){
    cek = 0;
    for(i = 0; i<N-2; i++){
        if( (Kata[i] > Kata[i+1] && Kata[i+2] > Kata[i+1] ) or ( Kata[i+1] > Kata[i] && Kata[i+1]>Kata[i+2] ) ){
            cek++;
            if(cek == N-2){        
            cout << Kata << endl;
            }    
        }
    }
}

}
