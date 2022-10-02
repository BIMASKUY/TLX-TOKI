#include <bits/stdc++.h>
using namespace std;

int main() {

string S1, S2, S3, S4;
cin >> S1 >> S2 >> S3 >> S4;

S1.erase(S1.find(S2), S2.size());
S1.insert(S1.find(S3) + S3.size(), S4);

cout << S1;

}