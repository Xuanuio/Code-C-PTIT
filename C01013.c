#include<stdio.h>

#define print printf

int main(){
    int Min = 1e9 + 7, Max = -1, n;
    while(scanf("%d", &n) != EOF){
        if(n > Max) Max = n;
        if(n < Min) Min = n;
    }
    print("%d %d", Max, Min);
}