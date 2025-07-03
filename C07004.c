#include<stdio.h>

#define print printf
#define ll long long

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ll a, b, mc;
    scanf("%lld%lld", &a, &b);
    mc = gcd(a, b);
    print("%lld/%lld", a/mc, b/mc);
}