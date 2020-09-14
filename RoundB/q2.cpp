#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, d;
    cin >> n >> d;
    int a[n];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    int ans = d;
    for(int i = n-1; i >=0 ; i--){
        ans = ans - (ans % a[i]);
    }
    return ans;
}

int main(){
    int t; 
    cin >> t; int i = 1;
    while(t--){
        // cout << "Case #" << i << ": " << solve() << endl;
        int a = solve();
    }
}