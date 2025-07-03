#include<stdio.h>

#define print printf
#define int long long

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

main(){
    int t;
    scanf("%lld", &t);
    while(t--){
        int n, m;
        scanf("%lld%lld", &n, &m);
        int ans = 1;
        for(int i=n; i<=m; i++){
            ans = ans / gcd(ans, i) * i;
        }
        print("%lld\n", ans);
    }
}