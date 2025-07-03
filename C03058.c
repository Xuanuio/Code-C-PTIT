#include<stdio.h>

#define print printf
#define ll long long

ll dp[101];

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve(){
    dp[1] = 1;
    dp[2] = 2;
    for(ll i=3; i<101; i++){
        dp[i] = dp[i-1] / gcd(dp[i-1], i) * i;
    }
}

int main(){
    solve();
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        print("%lld\n", dp[n]);
    }
}