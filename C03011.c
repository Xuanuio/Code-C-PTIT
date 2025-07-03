#include<stdio.h>
#include<math.h>

#define print printf

int dp[10];

int strong(int n){
    int tmp=n, sum=0;
    while(n){
        sum += dp[n % 10];
        n /= 10;
    }
    return sum == tmp;
}

int main(){
    dp[0] = dp[1] = 1;
    for(int i=2; i<10; i++){
        dp[i] = dp[i-1] * i;
    }
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b){
        a = a^b;
        b = b^a;
        a = a^b;
    }
    for(int i=a; i<=b; i++){
        if(strong(i)) print("%d ", i);
    }
}