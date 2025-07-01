#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char c[10];
        scanf("%s", c);
        int n = strlen(c);
        printf(c[0] == c[n-1] ? "YES\n" : "NO\n");
    }
}