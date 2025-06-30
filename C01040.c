#include<stdio.h>

#define print printf

int main(){
    int n;
    scanf("%d", &n);
    int sum = 1;
    for(int i=2; i<n; i++){
        if(n % i == 0) sum += i;
    }
    print(sum == n ? "1" : "0");
}