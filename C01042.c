#include<stdio.h>
#include<math.h>

#define print printf
#define ll long long

int main(){
    ll n, a[21], sum=0;
    a[0] = 1;
    scanf("%lld", &n);
    for(ll i=1; i<=n; i++){
        a[i] = a[i-1] * i;
        sum += a[i];
    }
    print("%lld", sum);
}