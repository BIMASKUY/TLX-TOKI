#include <iostream>
#include <cmath>
using namespace std;

int main() {

long long a, fa[7], i, Jumlah_a, Pengecek_0, b, Pangkat_a = 0, Digit_A[7],Akhir_a = 0,fb[7],Jumlah_b,Pangkat_b=0,
Digit_B[7], Akhir_b = 0,fc[7], Pangkat_c = 0,Jumlah_c, Digit_c[7], Akhir_c = 0, gabungan;

cin >> a >> b;

//Untuk a

Pengecek_0 = 0;
i = 0;
while(a!=0){
    if (Pengecek_0==0){
        if(a%10 == 0){
            a = a/10;
            continue;
        }
    }
    Pengecek_0++;
    fa[i] = a%10;
    a = a/10;
    Pangkat_a++;
    i++;
}
Jumlah_a = i;

for(i = 0; i< Jumlah_a; i++){
    Digit_A[i] = fa[i] * pow(10,Pangkat_a - 1);
    Pangkat_a--;
}

for(i = 0; i< Jumlah_a; i++){
    Akhir_a = Akhir_a + Digit_A[i];
}

//Untuk b

Pengecek_0=0;
i = 0;
while(b!=0){
    if (Pengecek_0==0){
        if(b%10 == 0){
            b = b/10;
            continue;
        }
    }
    Pengecek_0++;
    fb[i] = b%10;
    b = b/10;
    Pangkat_b++;
    i++;
}
Jumlah_b = i;

for(i = 0; i< Jumlah_b; i++){
    Digit_B[i] = fb[i] * pow(10,Pangkat_b-1);
    Pangkat_b--;
}

for(i = 0; i< Jumlah_b; i++){
    Akhir_b = Akhir_b + Digit_B[i];
}

//untuk gabungan

gabungan = Akhir_a + Akhir_b;

Pengecek_0 = 0;
i = 0;
while(gabungan !=0 ){
    if (Pengecek_0==0){
        if(gabungan%10 == 0){
            gabungan = gabungan/10;
            continue;
        }
    }
    Pengecek_0++;
    fc[i] = gabungan%10;
    gabungan = gabungan/10;
    Pangkat_c++;
    i++;
}
Jumlah_c = i;

for(i = 0; i<Jumlah_c; i++){
    Digit_c[i] = fc[i] * pow(10,Pangkat_c-1);
    Pangkat_c--;
}

for(i = 0; i< Jumlah_c; i++){
    Akhir_c = Akhir_c + Digit_c[i];
}

cout << Akhir_c;
}
