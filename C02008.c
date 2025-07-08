#include<stdio.h>

#define print printf

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==1 || i==n || j==1 || j==i) print("*");
            else print(".");
        }
        print("\n");
    }
}