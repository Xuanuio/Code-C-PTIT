#include<stdio.h>

#define print printf

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j <= n - i) print("~");
            else print("*");
        }
        print("\n");
    }
}