#include<stdio.h>

#define print printf
#define ll long long

int solve(ll n){
    int r;
    while(n){
        r = n % 10;
        n /= 10;
        if(r % 2) return 0;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        print(solve(n) ? "YES\n" : "NO\n");
    }
}