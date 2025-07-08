#include<stdio.h>

#define print printf

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        int k = i - 1;
        while(k--) print("~");
        for(int j=1; j<=m; j++){
            print("*");
        }
        print("\n");
    }
}