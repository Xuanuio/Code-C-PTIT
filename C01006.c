#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(b != 0){
        printf("%d %d %d ", a+b, a-b, a*b);
        float c = (1.0 * a) / b;
        printf("%.2f ", c);
        printf("%d", a % b);
    }
    else printf("0");
}