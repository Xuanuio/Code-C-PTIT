#include<stdio.h>

#define print printf
#define ll long long

int main(){
   	int t, Min, Max, r;
    scanf("%d", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        Min = 9, Max = 0;
        while(n){
            r = n % 10;
            n /= 10;
            if(r < Min) Min = r;
            if(r > Max) Max = r;
        }
        print("%d %d\n", Max, Min);
    }
}
