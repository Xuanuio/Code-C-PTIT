#include<stdio.h>

#define print printf

int sum(int n){
    int ans = 0;
    while(n){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int uoc(int n){
    int ans = 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                ans += sum(i);
                n /= i;
            }
        }
    }
    if(n > 1) ans += sum(n);
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    print(sum(n) == uoc(n) ? "YES\n" : "NO\n");
}