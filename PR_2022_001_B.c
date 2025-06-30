#include<stdio.h>
#define ll long long

int main(){
    ll u, d, n;
    scanf("%lld%lld%lld", &u, &d, &n);
    ll ans = n * (2 * u + (n - 1) * d) / 2;
    printf("%lld", ans);
}