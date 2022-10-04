#include <iostream>
#include <cmath>
using namespace std;

bool palindrom(string X){

int i = 0, j = X.size()-1, cek = 0;

while(X[i] == X[j]){
    i++;
    j--;
    cek++;
    if(cek == X.size()/2){
        return true;
    }
}
if(cek < X.size()/2){
    return false;
}

return 0;
}

int main() {

string S;
cin >> S;

if(S.size() == 1){
    cout << "YA";
    return 0;
}
else if(palindrom(S) == true){
    cout << "YA";
}
else{
    cout << "BUKAN";
}

}
