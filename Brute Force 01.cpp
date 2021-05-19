//https://codeforces.com/contest/189/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, rib[4];
    cin >> n;
    for(int i=0; i<3; i++){
        cin >> rib[i];
    }
    sort(rib, rib+3);
    int k, ans = 1;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            k = n-(i*rib[0]+j*rib[1]);
            if(k>=0 && k%rib[2]==0){
                ans = max(ans,(i+j+(k/rib[2])));
            }
        }
    }
    cout << ans;
}

