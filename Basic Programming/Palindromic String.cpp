#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, Y = "";
    cin >> S;
    int n = S.length();
    for (int i = n-1; i >= 0; i--){
        Y = Y + S[i];
    }
    if (Y == S){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}