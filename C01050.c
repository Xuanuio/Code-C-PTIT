#include<stdio.h>

#define print printf

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i == 1 || j == 1 || i == m || j == n){
                print("*");
            }
            else print(" ");
        }
        print("\n");
    }
}