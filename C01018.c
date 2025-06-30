#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int x = sqrt(n);
        printf(x * x == n ? "YES\n" : "NO\n");
    }
}