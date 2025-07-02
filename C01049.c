#include<stdio.h>

#define print printf

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, r;
        scanf("%d", &n);
        int c=0, l=0;
        while(n){
            r = n % 10;
            n /= 10;
            if(r % 2) l++;
            else c++;
        }
        print("%d %d\n", l, c);
    }
}