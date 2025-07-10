#include<stdio.h>

#define print printf

int main(){
    int n;
    scanf("%d", &n);
    char a[22][22], c = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char c = 'A';
            c += (j - 1) * 2;
            if(j >= i) print("%c", c);
        }
        print("\n");
    }
}