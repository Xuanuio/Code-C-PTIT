#include<stdio.h>

#define print printf

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, p, x=0;
        scanf("%d%d", &n, &p);
        for(int i=2; i<=n; i++){
            int j = i;
            if(j % p == 0){
                while(j % p == 0){
                    x++;
                    j /= p;
                }
            }
        }
        print("%d\n", x);
    }
}