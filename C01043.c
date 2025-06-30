#include<stdio.h>

#define print printf
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    ll a[10];
    a[0]=1;
    for(ll i=1; i<10; i++){
        a[i] = a[i-1] * i;
    }
    ll sum = 0, m = n, r;
    while(n){
        r = n % 10;
        n /= 10;
        sum += a[r];
    }
    print(sum == m ? "1" : "0");
}