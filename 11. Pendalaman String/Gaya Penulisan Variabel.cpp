#include <bits/stdc++.h>
using namespace std;

int main(){
    
string S;
int cek = 0, f[1000];

cin >> S;

for(int i = 0; i<S.length(); i++){
    if(S[i] == '_'){
        cek++;
        continue;
        }
    else if(cek >=1){
        f[i] = int(S[i]) - 32;
        S[i] = char(f[i]);
        cek--;
        }
    else if(int(S[i]) >= 65 && int(S[i]) <= 90){
        f[i] = int(S[i]) + 32;
        S[i] = char(f[i]);     
        cout << '_' << S[i];
        continue;
     }
     cout << S[i];
}    

}
