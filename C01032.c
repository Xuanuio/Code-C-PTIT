#include<stdio.h>
#include<math.h>

#define print printf
#define ll long long

ll solve(ll n){
    ll ans = 1;
    for(ll i=2; i<=sqrt(n); i++){
        if(n%i==0){
            ans *= i;
            while(n%i==0){
                n /= i;
            }
        }
    }
    ans *= n;
    return ans;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        print("%lld\n", solve(n));
    }
}