#include<stdio.h>

#define print printf

int main(){
    int n, k;
    scanf("%d", &n);
    char c, a = '@';
    for(int i=1; i<=n; i++){
        k = n - i;
        c = a + k;
        for(int j=1; j<=n-i+1; j++){
            print("%c", c);
            c++;
        }
        print("\n");
    }
}