#include<stdio.h>

#define print printf

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int k = n - i;
        while(k--) print("~");
        for(int j=1; j<=n; j++){
            if(i==1||i==n||j==1||j==n) print("*");
            else print(".");
        }
        print("\n");
    }
}