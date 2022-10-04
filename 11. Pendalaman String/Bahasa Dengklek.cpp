#include <bits/stdc++.h>
using namespace std;

int main() {

string S;
int f[1000];

cin >> S;

for(int i = 0; i<S.size(); i++){
    if(int(S[i] >= 97)){
        f[i] = int(S[i]) - 32;
    }
    else{
        f[i] = int(S[i]) + 32;
    }
}

for(int i = 0; i<S.size(); i++){
    cout << char(f[i]);
}

}
