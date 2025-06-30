#include<stdio.h>
#define ll long long

int main(){
    ll u, d, n;
    scanf("%lld%lld%lld", &u, &d, &n);
    ll ans = u;
    n--;
    while(n--){
        u += d;
        ans += u;
    }
    printf("%lld", ans);
}