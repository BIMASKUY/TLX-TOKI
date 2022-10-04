#include <bits/stdc++.h>
using namespace std;

int main() {

string A,B, hasil_a = "", hasil_b = "", hasil_c = "", panjang_C;
char a[7],b[7],c[7];
int cek=0, C, A_awal, B_awal;

cin >> A_awal >> B_awal;

A = to_string(A_awal);
B = to_string(B_awal);

for(int i = 0; i<A.size();i++){
    a[i] = A[i];
}

reverse(a, a+A.size());

for(int i = 0; i<A.size();i++){
    hasil_a = hasil_a + a[i] ;
}

for(int i = 0; i<B.size();i++){
    b[i] = B[i];
}

reverse(b, b+B.size());

for(int i = 0; i<B.size();i++){
    hasil_b = hasil_b + b[i] ;
}

C = stoi(hasil_a) + stoi(hasil_b);
panjang_C = to_string(C);

for(int i = 0; i<panjang_C.size();i++){
    c[i] = panjang_C[i];
}

reverse(c, c+panjang_C.size());

for(int i = 0; i<panjang_C.size();i++){
    hasil_c = hasil_c + c[i] ;
}

for(int i = 0; i<hasil_c.size();i++){
    if(hasil_c[i]!='0'){
        cek++;
    }
    if(cek>0){
        cout << hasil_c[i];
    }
}

}
