#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        double x = 1.0 / n;
        printf("%.15f\n", x);
    }
}