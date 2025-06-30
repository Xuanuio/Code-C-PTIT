#include<stdio.h>
#include<math.h>

#define print printf
#define ll long long

ll dp[1000006], pr[1000006];

void seive(){
    pr[0] = pr[1] = 1;
    for(ll i=2; i<=1000; i++){
        if(!pr[i]){
            for(ll j=i*i; j<=1000000; j+=i){
                pr[j]=1;
            }
        }
    }
}

void solve(){
    dp[0]=0;
    for(ll i=1; i<=1000000; i++){
        dp[i] = dp[i-1] + 1 - pr[i];
    }
}

int main(){
    seive();
    solve();
    int t;
    scanf("%d", &t);
    while(t--){
        ll a, b;
        scanf("%lld%lld", &a, &b);
        ll l = sqrt(a), r = sqrt(b);
        print("%lld\n", dp[r] - dp[l]);
    }
}