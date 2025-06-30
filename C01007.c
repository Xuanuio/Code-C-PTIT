#include<stdio.h>

#define int long long

main(){
    int a, b;
    scanf("%lld%lld", &a, &b);
    if(b != 0){
        printf("%d\n", a + b);
        printf("%d\n", a - b);
        printf("%lld\n", a * b);
        printf("%d\n", a / b);
        printf("%d\n", a % b);
        float c = (1.0 * a) / b;
        printf("%.2f", c);
    }
}