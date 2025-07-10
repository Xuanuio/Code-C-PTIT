#include<stdio.h>

#define print printf

int main(){
    long long n, Max = -1;
    while(scanf("%lld", &n) != EOF){
        if(n > Max) Max = n;
    }
    print("%lld", Max);
}