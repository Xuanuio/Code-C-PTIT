#include<stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int y, w, d;
    y = n / 365;
    n -= 365 * y;
    w = n / 7;
    d = n % 7;
    printf("%d %d %d", y, w, d);
}