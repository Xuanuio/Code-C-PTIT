#include<stdio.h>

#define print printf

int main(){
    int n, a, sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        sum += a;
    }
    double ans = 1.0 * sum / n;
    print("%.3lf", ans);
}