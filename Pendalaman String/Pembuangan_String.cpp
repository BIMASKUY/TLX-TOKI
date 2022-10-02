#include <bits/stdc++.h>
using namespace std;

int main() {

string S,T;

cin >> S >> T;

while(S.size() > 0){
    if(S.find(T) >= S.size() || S.find(T) < 0){
        break;
    }    
    S.erase(S.find(T), T.size());
}

cout << S;

}