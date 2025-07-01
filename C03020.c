#include<stdio.h>

#define print printf

#define int long long

int ck(int n){
    int ok=0, prev=0, tmp=n, sum=0, r;
    while(n){
        r = n % 10;
        if(r == 6) ok = 1;
        sum += r;
        prev = prev * 10 + r;
        n /= 10;
    }
    if(ok && prev == tmp && sum % 10 == 8) return 1;
    return 0;
}

main(){
    int a, b;
    scanf("%lld%lld", &a, &b);
    if(a > b){
        a = a^b;
        b = b^a;
        a = a^b;
    }
    for(int i=a; i<=b; i++){
        if(ck(i)) print("%lld ", i);
    }
}