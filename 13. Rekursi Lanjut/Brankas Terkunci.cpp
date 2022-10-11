#include <bits/stdc++.h>
using namespace std;

void print(int indeks, vector<char> &v, char f[], int N, int K){
    if(indeks == N){
        if(v.size() == K){
            for(auto i = 0; i != v.size(); i++){
                cout << v[i] << ' ';
            }
            cout << endl;
        }
        return;
    }
    v.push_back(f[indeks]);
    print(indeks+1, v, f, N, K);
    
    v.pop_back();
    print(indeks+1, v, f, N, K);
}

int main() {

int N, K; 
char f[1000];

vector<char> v;

cin >> N >> K;

for(int i=0; i<N; i++){
    f[i] = char(i + 49);
}

print(0, v, f, N, K);

return 0;

}
