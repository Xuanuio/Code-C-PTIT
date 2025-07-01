#include<stdio.h>
#include<math.h>

#define print printf
#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        ll Max = 0;
        for(ll i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                Max = i;
                while(n % i == 0){
                    n /= i;
                }
            }
        }
        if(n > 1) Max = n;
        print("%lld\n", Max); 
    }
    return 0;
}
