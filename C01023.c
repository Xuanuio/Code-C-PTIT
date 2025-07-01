#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        int Min = 9, Max = 0;
        int r;
        while(n){
            r = n % 10;
            n /= 10;
            if(r < Min) Min = r;
            if(r > Max) Max = r;
        }
        printf("%d %d\n", Max, Min);
    }
}