#include <bits/stdc++.h>
using namespace std;

int main(){
long long N;
int i = 0, total, f[1000];

cin >> N;

while(N != 0){
    if(N%2 == 0){
        f[i] = 0;
    }
    else{
        f[i] = 1;
    }      
    N = N/2;  
    i++;
}
total = i;

for(int i = total-1; i>=0; i--){
    cout << f[i];
}

}
