#include <bits/stdc++.h>
using namespace std;

int main() {

int N, D, x[101], y[101], hasil[101][101], Max, Min;

cin >> N >> D;

for(int i=0; i<N; i++){
    cin >> x[i] >> y[i];
}

for(int i = 0; i<N;i++){
    for(int j=1; j<N;j++){
        if(i == j){
            continue;
        }
        else{
            hasil[i][j] = (pow( abs(x[j]-x[i]) ,D)) + (pow( abs(y[j]-y[i]) ,D));
        }
    }
}

Max = hasil[0][1];
Min = hasil[0][1];

for(int i = 0; i<N; i++){
    for(int j = 1; j<N; j++){  
        if(i == j){
            continue;
        }
        else{
            if(Max < hasil[i][j]){
            Max = hasil[i][j];
            }
            if(Min > hasil[i][j]){
            Min = hasil[i][j];
            }
        }
    }
}
    
cout << Min << " " << Max;

}
