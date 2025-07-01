#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long ans = 1;
    while(n){
        ans *= n % 10;
        n /= 10;
    }
    printf("%lld", ans);
}