#include<stdio.h>

#define print printf

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            print("*");
        }
        print("\n");
    }
}