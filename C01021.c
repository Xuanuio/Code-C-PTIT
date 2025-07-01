#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ans = 0;
    while(n){
        ans += n % 10;
        n /= 10;
    }
    printf("%d", ans);
}