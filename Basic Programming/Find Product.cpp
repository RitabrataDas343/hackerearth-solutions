#include <bits/stdc++.h>
#define M 1000000007
using namespace std;

int main(){
    int n;
    int c;
    cin >> n;
    long long prod = 1;
    for (int i = 0; i < n; i++){
        cin >> c;
        prod = (prod * c) % M;
    }
    cout << prod << endl;
    return 0;
}