#include<stdio.h>

#define print printf

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        int k = i;
        for(int j=1; j<=m; j++){
            if(j < i) print("%d", k--);
            else print("%d", k++);
        }
        print("\n");
    }
}