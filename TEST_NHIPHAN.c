#include<stdio.h>

#define print printf

int main(){
    int n;
    scanf("%d", &n);
    if(!n) print("0");
    int a[20], cnt=0;
    while(n){
        a[cnt] = n % 2;
        n /= 2;
        cnt++;
    }
    for(int i=cnt-1; i>=0; i--){
        print("%d", a[i]);
    }
}