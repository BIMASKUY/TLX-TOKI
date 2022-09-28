#include <bits/stdc++.h>
using namespace std;

int main() {

string S;
int K, f[1000];
char c[1000];

cin >> S >> K;

for(int i = 0; i<S.size(); i++){
    c[i] = S[i];
    f[i] = int(c[i]) + K;
    if(f[i] > 122){
        f[i] = f[i] - 26;
    }
    c[i] = char(f[i]);
}

for(int i = 0; i<S.size(); i++){
    cout << c[i];
}

}